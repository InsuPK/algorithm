#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> matrix;

    int n, a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        matrix.push_back(make_pair(a, b));
    }

    sort(matrix.begin(), matrix.end());

    for (int i = 0; i < n; i++) {
        cout << matrix[i].first << " " << matrix[i].second << "\n";
    }

    return 0;
}