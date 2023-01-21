#include <iostream>

using namespace std;

int main() {
    string s;
    int first = 0;
    int second = 1;
    bool flag = 0;

    while (cin >> s) {
        if (s == "end")
            break;
        first = 0;
        second = 1;
        flag = 0;

        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o')
                first++;

            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o') && (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'u' || s[i+1] == 'i' || s[i+1] == 'o')) {
                second++;
                if (second > 2) {
                    cout << "<" << s << "> is not acceptable.\n";
                    flag = 1;
                    break;
                }
            }
            else if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o') && !(s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'u' || s[i+1] == 'i' || s[i+1] == 'o')){
                second++;
                if (second > 2) {
                    cout << "<" << s << "> is not acceptable.\n";
                    flag = 1;
                    break;
                }
            }
            else {
                second = 1;
            }

            if ((s[i] != 'e' && s[i+1] != 'e') && (s[i] != 'o' && s[i+1] != 'o') && s[i] == s[i+1]) {
                cout << "<" << s << "> is not acceptable.\n";
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            continue;
        
        if (s[s.length()-1] == 'a' || s[s.length()-1] == 'e' || s[s.length()-1] == 'u' || s[s.length()-1] == 'i' || s[s.length()-1] == 'o')
            first++;
        if (first != 0)
            cout << "<" << s << "> is acceptable.\n";
        else
            cout << "<" << s << "> is not acceptable.\n";
    }

    return 0;
}