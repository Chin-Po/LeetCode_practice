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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return Arr_to_BST(nums, 0, nums.size()-1);
    }
    
    TreeNode* Arr_to_BST(vector<int>& nums, int start, int end)
    {
        if(start > end) return NULL;
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = Arr_to_BST(nums, start, mid-1);
        root->right = Arr_to_BST(nums, mid+1, end);
        return root;
    }
};