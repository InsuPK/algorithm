#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                palindrome += s[i] + ('a' - 'A');
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                palindrome += s[i];
        }

        for (int i = 0; i < palindrome.length() / 2; i++) {
            if (palindrome[i] != palindrome[palindrome.length() - 1 - i])
                return false;
        }
        return true;
    }
};