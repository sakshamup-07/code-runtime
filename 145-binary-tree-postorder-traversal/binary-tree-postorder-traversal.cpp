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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> ans;
        vector<int> x = postorderTraversal(root->left);
        for(auto it : x)
        {
            ans.emplace_back(it);
        }
        vector<int> y = postorderTraversal(root->right);
        for(auto it : y)
        {
            ans.push_back(it);
        }
        ans.push_back(root->val);
    return ans;
    }
};