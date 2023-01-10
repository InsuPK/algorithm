#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, plug;
    int count = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> plug;
        count += plug - 1;
    }

    cout << count;

    return 0;
}