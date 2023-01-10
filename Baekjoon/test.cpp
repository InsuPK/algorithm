// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> solution(numRows);
//         long long n = 1;
//         long long r = 1;

//         for (int i = 1; i <= numRows; i++) {
//             solution[i-1].push_back(1);

//             for (int j = 1; j < i; j++) {

//                 for (int k = 1; k <= j; k++) {
//                     n *= i - k;
//                     r *= k;
//                 }

//                 solution[i-1].push_back(n/r);
//                 n = 1;
//                 r = 1;
//             }
//         }

//         return solution;
//     }
// };

// int main() {
//     Solution s;
//     vector<vector<int>> answer = s.generate(15);
//     //vector<vector<int>> answer = s.generate(2);
//     for (int i = 0; i < 15; i++) {
//         for (int j = 0; j < answer[i].size(); j++) {
//             cout << answer[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // int n = 1;
//     // int r = 1;

//     // for (int j = 0; j < 2; j++) {
//     //     n *= 3 - j;
//     //     r *= j + 1;
//     // }
//     // cout<<n/r<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solution(numRows);
        
        for (int i = 0; i < numRows; i++) {
            solution[i].resize(i+1, 1);
            for (int j = 1; j < i; j++) {
                solution[i][j] = solution[i-1][j-1] + solution[i-1][j];
            }
        }

        return solution;
    }
};

int main() {
    Solution s;
    vector<vector<int>> answer = s.generate(15);
    //vector<vector<int>> answer = s.generate(2);
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < answer[i].size(); j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    // int n = 1;
    // int r = 1;

    // for (int j = 0; j < 2; j++) {
    //     n *= 3 - j;
    //     r *= j + 1;
    // }
    // cout<<n/r<<endl;
    return 0;
}