#include <vector>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        int num;
        int dividend;
        int divisor;
        bool divisible = true;

        for (int i = left; i <= right; i++) {
            num = i;
            dividend = i;
            divisible = true;

            while (num > 0) {
                divisor = num % 10;
                if (divisor == 0 || dividend % divisor != 0) {
                    divisible = false;
                    break;
                }
                else {
                    num /= 10;
                }
            }

            if (divisible == true)
                answer.push_back(i);
        }
        return answer;
    }
};