#include <iostream>
#include <vector>

using namespace std;

 vector<bool> alphabet(28, true);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int n;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < s.length() - 1; j++) {
            if (alphabet[s[j] - 'a'] == false || alphabet[s[j+1] - 'a'] == false) {
                count++;
                break;
            }
            if (s[j] != s[j+1])
                alphabet[s[j] - 'a'] = false;
        }

        for (int k = 0; k < 28; k++) {
            alphabet[k] = true;
        }
    }

    cout << n - count;

    return 0;
}