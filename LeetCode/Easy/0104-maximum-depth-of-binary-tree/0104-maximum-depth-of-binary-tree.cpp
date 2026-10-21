/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void lnr(TreeNode* root, int& depth, int cur){
        if(!root)
            return;
        depth = max(depth, cur);
        lnr(root->left, depth, cur+1);
        lnr(root->right, depth, cur+1);
    }

    int maxDepth(TreeNode* root) {
        int depth = 0;
        lnr(root, depth, 1);
        return depth; 
    }
};