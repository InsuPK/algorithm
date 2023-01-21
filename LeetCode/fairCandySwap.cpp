#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < aliceSizes.size(); i++) sum1 += aliceSizes[i];
        for (int i = 0; i < bobSizes.size(); i++) sum2 += bobSizes[i];

        int diff = (sum1 - sum2) / 2;

        unordered_set<int> s(aliceSizes.begin(), aliceSizes.end());

        for (auto b : bobSizes) if (s.count(b + diff)) return {b + diff, b};

        return {};
    }
};