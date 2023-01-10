#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

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