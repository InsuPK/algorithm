#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {

        string str;

        getline(cin, str);
        
        if (str == ".")
            break;
        
        stack<char> s;

        for (int i = 0; i < str.length(); i++) {

            if (str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            }
            else if (str[i] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    s.push(str[i]);
                }
            }
            else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    s.push(str[i]);
                }
            }
        }

        if (s.empty())
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
        
    }

    return 0;
}