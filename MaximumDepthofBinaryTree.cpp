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
    int maxDepth(TreeNode* root) {
        int max=0,depth=0;
         helper(root,max,depth);
        return max;
    }
    void helper(TreeNode* root, int& max, int depth)
    {
        if(root==NULL)
        {
            if(depth > max){
                max=depth;
                return;
            }
        }
        else
        {
            helper(root->left, max , ++depth);
            --depth;
            helper(root->right, max , ++depth);
            --depth;

        }
        return ;
    }
};