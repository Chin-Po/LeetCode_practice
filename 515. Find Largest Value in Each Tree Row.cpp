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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int max = INT_MIN;
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* n = q.front(); q.pop();
                if(max < n->val) max = n->val;
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            res.push_back(max);
        }
        return res;
    }
};