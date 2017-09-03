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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int deepL = 1;
        int deepR = 1;
        if(root->left != NULL) deepL = deepL + maxDepth(root->left);
        if(root->right != NULL) deepR = deepR + maxDepth(root->right);
        
        return deepL >= deepR ? deepL : deepR;
    }
};