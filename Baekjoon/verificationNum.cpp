#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int certified = 0;
    int num;

    for (int i = 0; i < 5 ; i++) {
        cin >> num;
        certified += num * num;
    }

    cout << certified % 10;
    
    return 0;
}