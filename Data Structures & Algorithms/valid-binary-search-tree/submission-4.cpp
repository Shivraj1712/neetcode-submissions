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
    bool validate(TreeNode * root,int min, int max){
        if(!root) return true;
        if(root->val < min) return false;
        if(root->val > max) return false;
        if(root->val == min) return false;
        if(root->val == max) return false;
        return validate(root->left,min,root->val) && validate(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        int max = 1001;
        int min = -1001;
        return validate(root,min,max);
    }
};
