#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "";
        string b = "";

        for (int i = 0; i < s.length(); i++) {
            if (!a.empty() && s[i] == '#')
                a.erase(a.begin() + a.length() - 1);
            else if (s[i] != '#')
                a += s[i];
        }

        for (int i = 0; i < t.length(); i++) {
            if (!b.empty() && t[i] == '#')
                b.erase(b.begin() + b.length() - 1);
            else if (t[i] != '#')
                b += t[i];
        }

        return a == b;
    }
};