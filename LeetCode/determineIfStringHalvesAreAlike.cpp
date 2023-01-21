#include <string>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.length()/2);
        string b = s.substr(s.length()/2, s.length());
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < s.length()/2; i++) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                count1++;
            if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U')
                count2++;
        }

        return count1 == count2;
    }
};