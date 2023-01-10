#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] - 3 >= int('A'))
            cout << char(s[i] - 3);
        else
            cout << char(s[i] - 3 + (int('Z') - int('A') + 1));
    }

    return 0;
}