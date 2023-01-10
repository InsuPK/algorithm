#include <iostream>
#include <algorithm>

using namespace std;

int n[10];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int input;
    int answer = 1;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        n[i] = input % 42;
    }

    sort(n, n+10);

    for (int i = 0; i < 9; i++) {
        if (n[i] != n[i+1])
            answer++;
    }

    cout << answer;

    return 0;
}