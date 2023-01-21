#include <iostream>
using namespace std;

int main() {
    int n;
    int change = 0;

    cin >> n;

    n = 1000 - n;
    change += n / 500;
    n = n % 500;
    change += n / 100;
    n = n % 100;
    change += n / 50;
    n = n % 50;
    change += n / 10;
    n = n % 10;
    change += n / 5;
    n = n % 5;
    change += n;

    cout << change;
}