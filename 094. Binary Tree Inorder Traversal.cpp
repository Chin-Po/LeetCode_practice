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
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> tmp_stack;
        vector<int> sol;
        while(!tmp_stack.empty() || root != NULL)
        {
            if(root != NULL)
            {
                tmp_stack.push(root);
                root = root->left;
            }
            else
            {
                root = tmp_stack.top();
                sol.push_back(root->val);
                tmp_stack.pop();
                root = root->right;
            }
        }
        return sol;
        
        
        
        /* 遞迴的解法！！但題目說這太trival = =
        vector<int> sol;
        if(!root != NULL)
        {
            inorderTraversal(root->left);
            sol.push_back(root->val);
            inorderTraversal(root->right);
        }
        return sol;
        */
        
    }
};