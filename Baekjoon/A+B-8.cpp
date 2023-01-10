#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, input1, input2;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> input1 >> input2;
        cout << "Case #" << i << ": " << input1 << " + " << input2 << " = " << input1+input2 << "\n";
    }

    return 0;
}