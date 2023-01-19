#include <iostream>
#include <algorithm>
using namespace std;

string vocab[20001];

bool comp(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    
    return a.length() < b.length();
}

int main() {
    int n;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        vocab[i] = s;
    }

    sort(vocab, vocab + n, comp);

    for (int i = 0; i < n; i++) {
        if (vocab[i] == vocab[i+1])
            continue;
        cout << vocab[i] << "\n";
    }

    return 0;
}