#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<char, int> map;
    vector<char> answer;
    
    int n;
    string name;
    cin >> n;

    while (n > 0) {
        cin >> name;
        map[name[0]]++;
        n--;
    }

    for (auto iter : map) {
        if (iter.second >= 5) {
            answer.push_back(iter.first);
        }
    }

    sort(answer.begin(), answer.end());

    if (answer.size() == 0) {
        cout << "PREDAJA";
    }
    else {
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i];
        }
    }

    return 0;
}