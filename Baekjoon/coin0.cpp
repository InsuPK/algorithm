#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    int input;
    int count = 0;
    vector<int> value;

    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> input;
        value.push_back(input);
    }

    for (int i = value.size() - 1; i >= 0; i--) {
        count += k / value[i];
        k = k % value[i];
    }

    cout << count;

    return 0;
}