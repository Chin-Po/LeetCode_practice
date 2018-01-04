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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        bool isForward = 1;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> vec;
            
            for(int i = 0; i < size; i++){   
                TreeNode* t = q.front(); q.pop();
                if(t != NULL) vec.push_back(t->val);
                if(t->left != NULL) q.push(t->left);
                if(t->right != NULL) q.push(t->right);
            }
            
            if(isForward){
                res.push_back(vec);
                isForward = 0;
            }
            else{
                reverse(vec.begin(), vec.end());
                res.push_back(vec);
                isForward = 1;
            }
        }
        return res;
    }
};