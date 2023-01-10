#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v1;
    vector<int> v2;

    int n;
    int input;
    int answer = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> input;
        v1.push_back(input);
    }

    for (int i = 0; i < n; i++) {
        cin >> input;
        v2.push_back(input);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), comp);

    for (int i = 0; i < n; i++) {
        answer += v1[i] * v2[i];
    }

    cout << answer;

    return 0;
}