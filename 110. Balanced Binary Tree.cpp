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
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        if(root->left == NULL && root->right == NULL) return true;
        int dL = findDepth(root->left);
        int dR = findDepth(root->right);
        int diff = abs(dL - dR);
        bool if_balanced = 1;
        if(diff > 1) if_balanced = 0;
        return if_balanced && isBalanced(root->left) && isBalanced(root->right);
    }
    int findDepth(TreeNode* root)
    {
        if(root == NULL) return 0;
        int deepL = 1;
        int deepR = 1;
        if(root->left != NULL) deepL = deepL + findDepth(root->left);
        if(root->right != NULL) deepR = deepR + findDepth(root->right);
        return deepL >= deepR ? deepL : deepR;
    }
};