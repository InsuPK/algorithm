#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for (int i = 0; i < g.size(); i++) {
            cout << g[i] << endl;
        }

        for (int i = 0; i < s.size(); i++) {
            for (int j = count; j < g.size(); j++) {
                if(s[i] >= g[j]) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};

int main() {
    vector<int> v1 = {10, 9, 8, 7};
    vector<int> v2 = {5, 6, 7, 8};

    Solution s;
    cout << s.findContentChildren(v1, v2);

    return 0;
}
