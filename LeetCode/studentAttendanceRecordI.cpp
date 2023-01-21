#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int l = 1;

        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == 'A') a++;

            if (s[i] == 'L' && s[i+1] == 'L') {
                l++;
            }
            else {
                l = 1;
            }

            if (l > 2) return false;
        }

        if (s[s.length()-1] == 'A') a++;

        if (a < 2)
            return true;
        else
            return false;
    }
};