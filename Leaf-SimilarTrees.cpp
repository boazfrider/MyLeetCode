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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1,v2;
        helper(root1,v1);
        helper(root2,v2);
        if(v1==v2)
            return true;
        return false;
        
       
    }
    void helper(TreeNode* tree,vector<int>& v1)
    {
        if(!tree)
            return;
        if(!tree->left && !tree->right)
            v1.push_back(tree->val);
        helper(tree->left,v1);
        helper(tree->right,v1);
        return;
    }
};