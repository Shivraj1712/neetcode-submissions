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
    int height(TreeNode * root){
        if(!root) return 0 ;
        else {
            return 1 + max(height(root->left),height(root->right));
        }
    }
    int solve(TreeNode * root){
        if(!root) return 0 ;
        else {
            int dia = height(root->left) + height(root->right);
            int left = solve(root->left);
            int right = solve(root->right);
            return max(dia,max(left,right));
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root);
    }
};
