#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int storage[60001] = {0, };
        int answer;
        for (int i = 0; i < nums.size(); i++) {
            storage[nums[i]+30000]++;
        }
        for (int i = 0; i < 60001; i++) {
            if (storage[i] == 1) {
                answer = i - 30000;
                break;
            }
        }
        return answer;
    }
};

int main() {
    Solution s;
    vector<int> v = {4,1,2,1,2};
    cout << s.singleNumber(v);
}