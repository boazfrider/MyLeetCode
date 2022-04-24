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
    int sumNumbers(TreeNode* root) {
        int num=0,sum=0;
        helper(num,root,sum);
        return sum;
    }
    void helper(int num,TreeNode* root,int& sum)
    {
        if(root==NULL)
        {
            return;
        }
        num=num*10 + root->val;
        if(root->left==NULL && root->right==NULL)
            sum+=num;
        if(root->left!=NULL)
            helper(num,root->left,sum);
        if(root->right!=NULL)
            helper(num,root->right,sum);
        num/=10;
    
    }
};