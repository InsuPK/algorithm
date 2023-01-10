#include <iostream>

using namespace std;

int storage[1000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    int n;
    int score;
    int count = 0;
    double sum = 0;
    double average;
    double answer;

    cin >> c;

    for (int i = 0; i < c; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> score;
            storage[j] = score;
            sum += score;
        }

        average = sum / n;

        for (int k = 0; k < n; k++) {
            if (storage[k] > average)
                count++;
        }

        answer = (double)count/n * 100;
   
        cout << fixed;
        cout.precision(3);
        
        cout << answer << "%" << "\n";

        sum = 0;
        count = 0;
    }

    return 0;
}