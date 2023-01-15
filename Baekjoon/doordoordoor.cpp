// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     int n;
//     int door;
//     int two;
//     int three;

//     cin >> n;
//     cin >> door;
//     three = door;
    
//     if (three == 0)
//         two = 1;
//     else
//         two = 0;

//     for (int i = 2; i <= n; i++) {
//         if (door == 0)
//             door = 1;
//         else
//             door = 0;

//         if ((i % 3 == 0 && door != three) || (i % 2 == 0 && door != two)) {
//             cout << "Love is open door";
//             return 0;
//         }
//     }

//     if (n % 2 == 0) {
//         if (door == 1)
//             door = 0;
//         else
//             door = 1;
//     }

//     for (int i = 2; i <= n; i++) {
//         if (door == 0)
//             door = 1;
//         else
//             door = 0;

//         cout << door << "\n";
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int n;
    int door;
    cin >> n;
    cin >> door;

    if (n > 5)
        cout << "Love is open door";
    else {
        for (int i = 1; i < n; i++) {
            door = 1 - door;
            cout << door << "\n";
        }
    }
}