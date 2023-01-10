#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int out, in;
    int inside = 0, max = 0;

    for (int i = 0; i < 4; i++) {
        cin >> out >> in;
        inside -= out;
        inside += in;
        if (inside > max)
            max = inside;
    }

    cout << max;

    return 0;
}