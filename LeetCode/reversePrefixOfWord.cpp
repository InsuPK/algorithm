#include <string>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string answer = "";
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                for (int j = i; j >= 0; j--) {
                    answer += word[j];
                }
                answer += word.substr(i + 1, word.length() - i + 1);
                break;
            }
        }
        if (answer == "") answer = word;
        return answer;
    }
};