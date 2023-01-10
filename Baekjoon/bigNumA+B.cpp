#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
    string b;
    string answer = "";
    
    int difference;
    int carry = 0;

    cin >> a >> b;

    if (a.length() < b.length()) {
        swap(a, b);
    }
    
    difference = a.length() - b.length();

    for (int i = 0; i < difference; i++) {
        b = "0" + b;
    }

    for (int i = a.length() - 1; i >= 0; i--) {
        if (carry + (a[i] - '0') + (b[i] - '0') > 9) {
            answer += ((carry + ((a[i] - '0') + (b[i] - '0'))) % 10) + '0';
            carry = 1;
        } 
        else {
            answer += (carry + (a[i] - '0') + (b[i] - '0')) + '0';
            carry = 0;
        }
    }

    if (carry == 1)
        answer += "1";

    for (int i = answer.length() - 1; i >= 0; i--) {
        cout << answer[i];
    }

    return 0;
}