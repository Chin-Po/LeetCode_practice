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
    int getMinimumDifference(TreeNode* root) {
        traverse(root); // get a sorted array, from inorder-traversal
        int diff = INT_MAX;
        for(int i = 0; i < list.size()-1; i++){
            if(abs(list[i]-list[i+1]) < diff) diff = abs(list[i]-list[i+1]);
        }
        return diff;
    }
    
    void traverse(TreeNode* node){
        if(node == NULL) return;
        if(node->left != NULL) traverse(node->left);
        list.push_back(node->val);
        if(node->right != NULL) traverse(node->right);
    }
private:
    vector<int> list;
};