#include <iostream>
#include <vector>

using namespace std;

class MyHashMap {
    vector<vector<pair<int, int>>> map;
    const int size = 10000;

    public:
    MyHashMap() {
        map.resize(size);
    }

    void put(int key, int value) {
        int index = key % size;
        vector<pair<int, int>> &row = map[index];
        for(auto iter = row.begin(); iter != row.end(); iter++) {
            if (iter->first == key) {
                iter->second = value;
                return;
            }
        }
        row.push_back(make_pair(key, value));
    }

    int get(int key) {
        int index = key % size;
        vector<pair<int, int>> &row = map[index];
        for (auto iter : row) {
            if (iter.first == key) {
                return iter.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        int index = key % size;
        vector<pair<int, int>> &row = map[index];
        for (auto iter = row.begin(); iter != row.end(); iter++) {
            if (iter->first == key) {
                row.erase(iter);
                return;
            }
        }
    }
};

int main() {
    MyHashMap myHashMap;
    myHashMap.put(1, 1); // The map is now [[1,1]]
    myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
    myHashMap.get(1);    // return 1, The map is now [[1,1], [2,2]]
    myHashMap.get(3);    // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
    myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
    myHashMap.get(2);    // return 1, The map is now [[1,1], [2,1]]
    myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
    myHashMap.get(2);  
    return 0;
}