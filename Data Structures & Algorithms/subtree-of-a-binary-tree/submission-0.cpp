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
    bool verify(TreeNode * r, TreeNode * s){
        if(!r && !s) return true;
        if(!r || !s) return false;
        return r->val == s->val && verify(r->left,s->left) && verify(r->right,s->right);
    }
    bool solve(TreeNode * r, TreeNode * s){
        if(!r && !s) return true;
        if(!r || !s) return false;
        return verify(r,s) || solve(r->left,s) || solve(r->right,s);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot) return true;
        if(!subRoot) return true;
        return solve(root,subRoot);
    }
};