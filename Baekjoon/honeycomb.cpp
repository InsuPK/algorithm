#include <iostream>
using namespace std;

int main() {
    int n;
    int answer = 0;
    cin >> n;

    for (int i = 1; i < n; i += 6 * answer) {
        answer++;
    }
    
    cout << answer + 1;

    return 0;
}