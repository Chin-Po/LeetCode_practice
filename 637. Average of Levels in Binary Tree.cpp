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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            double sum = 0;
            for(int i = 0; i < size; i++){
                TreeNode* n = q.front(); q.pop();
                sum = sum + n->val;
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            res.push_back(sum / size);
        }
        return res;
    }
};

// ref: http://www.cnblogs.com/grandyang/p/7259209.html