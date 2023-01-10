#include <iostream>

using namespace std;

int stack[10001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string input;
    int num;
    int index = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == "top") {
            if (index == 0)
                cout << -1 << "\n";
            else
                cout << stack[index] << "\n";
        }
        else if (input == "size") {
            cout << index << "\n";
        }
        else if (input == "empty") {
            if (index == 0)
                cout << 1 << "\n";
            else 
                cout << 0 << "\n";
        }
        else if (input == "pop") {
            if (index == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << stack[index] << "\n";
                index--;
            }
        } 
        else {
            cin >> num;
            index++;
            stack[index] = num;
        }
    }

    return 0;
}