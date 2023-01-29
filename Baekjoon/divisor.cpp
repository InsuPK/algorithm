#include <iostream>
using namespace std;

int main() {
    int n;
    int input;
    int max = 1;
    int min = 1000001;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input < min)
            min = input;
        if (input > max)
            max = input;
    }
    cout << min * max;

    return 0;
}