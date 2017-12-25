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
    bool isSymmetric(TreeNode* root) {
        return isSym(root, root);
    }
    bool isSym(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left != NULL && right == NULL) return false;
        if(left == NULL && right != NULL) return false;
        if(left == right) return isSym(left->left, left->right);
        if(left->val != right->val) return false;
        
        if(isSym(left->left, right->right) && isSym(left->right, right->left)) return true;
        else return false;
    }
};