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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> res;
        unordered_map<int, int> m; // sum, occurence
        int max_occur = 0;
        postorder(root, res, m, max_occur);
        return res;
    }
    int postorder(TreeNode* &root, vector<int>& res, unordered_map<int, int>& m, int& max_occur){
        if(!root) return 0;
        int left = postorder(root->left, res, m, max_occur);
        int right = postorder(root->right, res, m, max_occur);
        int sum = root->val + left + right;
        m[sum]++;
        if(m[sum] >= max_occur){
            if(m[sum] > max_occur) res.clear();
            res.push_back(sum);
            max_occur = m[sum];
        }
        return sum;
    }
}; 