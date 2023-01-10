#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string s;
    int consecutive = 0;
    int total = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'X') {
                consecutive = 0;
            }
            else {
                consecutive++;
                total += consecutive;
            }
        }
        cout << total << "\n";
        total = 0;
        consecutive = 0;
    }
    
    return 0;
}