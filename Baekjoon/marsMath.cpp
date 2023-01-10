#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    float num;
    char op;

    for (int i = 0; i < n; i++) {
        cin >> num;
        while (true) {
            cin.get(op);
            if (op == '@')
                num *= 3;
            else if (op == '%')
                num += 5;
            else if (op == '#')
                num -= 7;
            else if (op == '\n')
                break;
        }
        cout << fixed;
        cout.precision(2);
        cout << num << "\n";
    }
    
    return 0;
}