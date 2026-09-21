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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return {};
        ans.emplace_back(root->val);
        vector<int> x = preorderTraversal(root->left);
        for(auto it : x)
        {
            ans.push_back(it);
        }
        vector<int> y = preorderTraversal(root->right);
        for(auto it : y)
        {
            ans.emplace_back(it);
        }
        return ans;
    }
};