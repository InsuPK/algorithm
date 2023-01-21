#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> p;
        string answer = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                if (p.size() > 0) {
                    answer += '(';
                }
                p.push('(');
            }
            else if (s[i] == ')') {
                if (p.size() > 1) {
                    answer += ')';
                }
                p.pop();
            }
        }

        return answer;
    }
};