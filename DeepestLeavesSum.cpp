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
    int sum=0;
    int maxheight;
    int deepestLeavesSum(TreeNode* root) {
        
        maxheight=maxfind(root);
        int height=0;
        dfs(root,height);
        
        return sum;
        
    }
    void dfs(TreeNode* root, int height)
    {
        if( height==maxheight-1){
             sum += root->val;
            return;
        }
        if(root->left)
            dfs(root->left,height+1);
        if(root->right)
            dfs(root->right,height+1);
        
    }
    int maxfind(TreeNode* t)
    {
        if(!t)
            return 0;
        return max(maxfind(t->left),maxfind(t->right))+1;
    }
};