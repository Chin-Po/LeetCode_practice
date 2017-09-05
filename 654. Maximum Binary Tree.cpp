/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildTree(nums, 0, nums.size());
    }
    TreeNode* buildTree(vector<int>& nums, int start, int end)
    {
        if(start == end) return NULL;
        int maxIdx = findMax(nums, start, end);
        TreeNode* root = new TreeNode(nums[maxIdx]);
        root->left = buildTree(nums, start, maxIdx);
        root->right = buildTree(nums, maxIdx+1, end);
        return root;
    }
    int findMax(vector<int>& nums, int start, int end)
    {
        int maxIdx = start;
        for(int i = start; i < end; i++)
        {
            if(nums[i] > nums[maxIdx]) maxIdx = i;
        }
        return maxIdx;
    }
};