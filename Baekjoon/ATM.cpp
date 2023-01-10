#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int time[n];
    int sum = 0;
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }

    sort(time, time+n);

    for (int i = 0; i < n; i++) {
        sum += time[i];
        total += sum;
    }

    cout << total;

    return 0;
}