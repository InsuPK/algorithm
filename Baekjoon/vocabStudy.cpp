#include <iostream>

using namespace std;

int alphabet[28] = {0, };

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int max = 0;
    char letter;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            alphabet[s[i] - 'a']++;
        else
            alphabet[s[i] - 65]++;
    }

    for (int i = 0; i < 28; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            letter = 'A' + i;
        }
        else if (alphabet[i] == max) {
            letter = '?';
        }
    }

    cout << letter;

    return 0;
}