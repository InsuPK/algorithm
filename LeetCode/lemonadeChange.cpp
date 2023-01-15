#include <vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change[2] = {0, };

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                change[0]++;
            }
            else if (bills[i] == 10) {
                change[1]++;
                if (change[0] == 0) 
                    return false;
                else
                    change[0]--;
            }
            else {
                if (change[0] >= 1 && change[1] >= 1) {
                    change[0] -= 1;
                    change[1] -= 1;
                }
                else if (change[0] >= 3) {
                    change[0] -= 3;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};