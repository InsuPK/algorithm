#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int digit;
    int num[10] = {0, };
    int count = 0;
    int max = 0;

    cin >> n;

    while (n > 0) {
        digit = n % 10;
        n = n / 10;
        if (digit == 0)
            num[0]++;
        else if (digit == 1)
            num[1]++;
        else if (digit == 2)
            num[2]++;
        else if (digit == 3)
            num[3]++;
        else if (digit == 4)
            num[4]++;
        else if (digit == 5)
            num[5]++;
        else if (digit == 6)
            num[6]++;
        else if (digit == 7)
            num[7]++;
        else if (digit == 8)
            num[8]++;
        else if (digit == 9)
            num[9]++;
    }

    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9)
            if (max < num[i])
                max = num[i];
    }

    if ((num[6] + num[9]) % 2 == 0) {
        if ((num[6] + num[9]) / 2 > max)
            max = (num[6] + num[9]) / 2;
    }
    else if ((num[6] + num[9]) % 2 == 1) {
        if ((num[6] + num[9] + 1) / 2 > max)
            max = (num[6] + num[9] + 1) / 2;
    }

    count += max;

    cout << count;

    return 0;
}