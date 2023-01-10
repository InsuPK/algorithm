#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int note;
    int detect;

    cin >> note;
    detect = note;

    if (note == 1) {
        for (int i = 0; i < 7; i++) {
            cin >> note;
            if (++detect != note) {
                cout << "mixed";
                return 0;
            }
        }
        cout << "ascending";
    } 
    else if (note == 8) {
        for (int i = 0; i < 7; i++) {
            cin >> note;
            if (--detect != note) {
                cout << "mixed";
                return 0;
            }
        }
        cout << "descending";
    } 
    else {
        cout << "mixed";
    }

    return 0;
}