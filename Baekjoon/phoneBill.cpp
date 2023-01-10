#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int time;
    int y = 0;
    int m = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> time;
        y += time/30 * 10 + 10;
        m += time/60 * 15 + 15;
    }
    
    if (y == m)
        cout << "Y M " << y;
    else if (y < m)
        cout << "Y " << y;
    else
        cout <<"M " << m;

    return 0;
}