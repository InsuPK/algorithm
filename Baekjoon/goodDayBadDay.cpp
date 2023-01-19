#include <iostream>
using namespace std;

int main() {
    
    int n, d;
    cin >> n >> d;

    double g = 0, b = 0;
    double q, w, e, r;

    if (d == 1) b = 1.0;
    else g = 1.0;

    cin >> q >> w >> e >> r;

    for (int i = 0; i < n; i++) {
        double x = q * g + e * b;
        double y = w * g + r * b;
        g = x;
        b = y;
    }

    cout << (int)(1000 * g) << "\n" << (int)(1000 * b);

    return 0;
}