#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = 0;
        string prefix;
        bool same = true;

        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].length() > min)
                min = strs[i].length();
        }

        for (int i = 0; i < min; i++) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] != strs[j+1][i]) {
                    same = false;
                    break;
                }
            }
            if (same == true)
                prefix += strs[0][i];
        }

        return prefix;
    }
};