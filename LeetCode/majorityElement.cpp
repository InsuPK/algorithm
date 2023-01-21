#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = floor(nums.size() / 2);
        unordered_map<int, int> m;
        for (int n : nums) m[n]++;
        for (auto iter : m) if (iter.second > majority) return iter.first;
        return 0;
    }
};