#include <iostream>

int card[5000001];

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int front, end;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        card[i] = i;
    }

    front = 1;
    end = n;

    for (int i = 0; i < n-1; i++) {
        if (front >= n) {
            front = front % n + 1;
        }
        else {
            front += 1;
        }

        if (end >= n) {
            end = end % n + 1;
            card[end] = card[front];
        } else {
            end += 1;
            card[end] = card[front];
        }
        
        if (front >= n) {
            front = front % n + 1;
        }
        else {
            front += 1;
        }
    }

    cout << card[front];

    return 0;
}