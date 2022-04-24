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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* r=NULL;
        TreeNode* p = root;
        TreeNode* t;
        //TreeNode* keep=root;
        if(root==nullptr)
        {
            TreeNode* t=new TreeNode(val);
            root=t;
            return root ;
        }
        while(p)
        {
            r = p;
            if(val< p->val)
            {
                p=p->left;
            }
            else
                p=p->right;
        }
        t=new TreeNode(val);
        if(val > r->val)
            r->right=t;
        else
            r->left=t;
        return root;
    }