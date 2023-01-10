#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    int answer;
    int digit;
    int count[10] = {0, };

    cin >> a >> b >> c;

    answer = a * b * c;

    while (answer > 0) {
        digit = answer%10;
        answer = answer/10;

        if (digit == 0)
            count[0]++;
        else if (digit == 1)
            count[1]++;
        else if (digit == 2)
            count[2]++;
        else if (digit == 3)
            count[3]++;
        else if (digit == 4)
            count[4]++;
        else if (digit == 5)
            count[5]++;
        else if (digit == 6)
            count[6]++;
        else if (digit == 7)
            count[7]++;
        else if (digit == 8)
            count[8]++;
        else if (digit == 9)
            count[9]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << "\n";
    }

    return 0;
}