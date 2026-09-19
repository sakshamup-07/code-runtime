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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> ans ;
        vector<int> x = inorderTraversal(root->left);
        for(auto it : x) ans.emplace_back(it);
        ans.emplace_back(root->val);
        vector<int> y = inorderTraversal(root->right);
        for(auto jt : y) ans.push_back(jt);
        return ans;
    }
};