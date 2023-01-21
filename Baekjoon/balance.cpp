#include <iostream>
#include <stack>
#include <string>
 
using namespace std;

int main() {
    string s;
    bool balance = true;

    while (getline(cin, s)) {
        stack<char> b;
        balance = true;

        if (s == ".")
            break;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == ')') {
                if (b.empty() || b.top() != '(') {
                    cout << "no\n";
                    balance = false;
                    break;
                }
                else {
                    b.pop();
                }
            }

            if (s[i] == ']') {
                if (b.empty() || b.top() != '[') {
                    cout << "no\n";
                    balance = false;
                    break;
                }
                else {
                    b.pop();
                }
            }

            if (s[i] == '(' || s[i] == '[') {
                b.push(s[i]);
            }
        }

        if (balance != false) {
            if (b.empty())
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }

    return 0;
}