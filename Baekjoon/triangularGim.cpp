#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double min = a / b;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (min > a / b) min = a / b;
    }

    cout << fixed;
    cout.precision(2);
    
    cout << min * 1000;

    return 0;
}