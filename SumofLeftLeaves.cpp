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
    int sumOfLeftLeaves(TreeNode* root) {
        int k=0;
        help(root,k);
        return k;
       
    }
    void help(TreeNode* root, int& sum){
         if(root==nullptr)
            return ;
        
        
       if(root->left!=nullptr && root->left->left==nullptr && root->left->right==nullptr)
       {
           sum+= root->left->val;
       }
         help(root->left,sum);
         help(root->right,sum);
    }
};