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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        vector<int>temp;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while(q.size() > 0){
            TreeNode * curr = q.front();
            q.pop();
            if(curr == nullptr){
                if(q.size() == 0){
                    break;
                }else{
                    ans.push_back(temp);
                    temp.clear();
                    q.push(nullptr);
                }
            }else{
                temp.push_back(curr->val);
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
