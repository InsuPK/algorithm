#include <iostream>

using namespace std;

int previous[16];
int current[16];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t, k, n;
    int answer = 0;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> k >> n;
        
        for (int j = 1; j <= n; j++) {
            previous[j] = j;
        }

        while (k > 0) {
            current[1] = 1;
            for (int i = 2; i <= n; i++) {
                current[i] = current[i-1] + previous[i];
            }
            for (int j = 1; j <= n; j++) {
                previous[j] = current[j];
            }
            k--;
        }

        cout << current[n] << "\n";
    }
    
    return 0;
}