#include <vector>
using namespace std;
// * Definition for a binary tree node.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> range;
        order(root, low, high, range);
        int answer = 0;

        for (int i = 0; i < range.size(); i++) {
            answer += range[i];
        }
        
        return answer + low + high;
    }

    void order(TreeNode *root, int low, int high, vector<int> &range) {
        if (root == nullptr)
            return;

        if (root->val > low && root->val < high)
            range.push_back(root->val);
        
        order(root->left, low, high, range);
        order(root->right, low, high, range);
    }
};