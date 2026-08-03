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
    int idx = 0 ;
    int search(vector<int>&arr,int r){
        for(auto i = 0 ; i < arr.size(); ++i){
            if(arr[i] == r) return i ;
        }
        return - 1;
    }
    TreeNode* build(vector<int>& p,vector<int>& i , int l , int r){
        if(l > r) return nullptr;
        if(idx >= p.size()) return nullptr;
        TreeNode* root = new TreeNode(p[idx]);
        int mid = search(i,p[idx]);
        idx++;
        root->left = build(p,i,l,mid-1);
        root->right = build(p,i,mid+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int l = 0 , r = preorder.size() - 1;
        return build(preorder,inorder,l,r);
    }
};
