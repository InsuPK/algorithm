#include <iostream>

using namespace std;

int num[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int find;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> find;

    for (int i = 0; i < n; i++) {
        if (num[i] == find)
            count++;
    }

    cout << count;

    return 0;
}