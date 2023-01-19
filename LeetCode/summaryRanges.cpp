#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if (nums.size() == 0)
            return answer;

        string start = to_string(nums[0]);
        string end = to_string(nums[0]);

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i+1])
                end = to_string(nums[i+1]);
            else {
                if (start == end) answer.push_back(start);
                else answer.push_back(start + "->" + end);

                start = to_string(nums[i+1]);
                end = to_string(nums[i+1]);
            }
        }

        if (start == end) answer.push_back(start);
        else answer.push_back(start + "->" + end);

        return answer;
    }
};