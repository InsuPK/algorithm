#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i += 10) {
        cout << s.substr(i, 10) << endl;
    }

    return 0;
}
