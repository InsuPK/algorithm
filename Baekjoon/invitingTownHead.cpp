#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int input;
    vector<int> day;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        day.push_back(input);
    }

    sort(day.begin(), day.end(), compare);

    for (int i = 0; i < n; i++) {
        day[i] += i + 1;
    }

    sort(day.begin(), day.end(), greater<int>());

    cout << day[0] + 1;

    return 0;
}