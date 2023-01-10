#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, ans;

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> a >> b;
        ans = 1;

        for (int i = 0; i < b; i++) {
            ans = (ans * a) % 10;
        }

        if (ans % 10 == 0)
            cout << 10 << "\n";
        else 
            cout << ans << "\n";
    }

    return 0;

}