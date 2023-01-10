#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int participant;
    int max = 0;
    int score = 0;
    int input;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> input;
            score += input;
        }
        if (score > max) {
            max = score;
            participant = i+1;
        }
        score = 0;
    }

    cout << participant << " " << max;
    
    return 0;
}