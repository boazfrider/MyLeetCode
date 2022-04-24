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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
       return  helper(preorder,index,INT_MAX);
    }
    TreeNode* helper(vector<int>& preorder, int& index,int val)
    {
        if(index==preorder.size() || preorder[index]>val) 
            return NULL;
        TreeNode* temp=new TreeNode(preorder[index]);
        index++;
        temp->left=helper(preorder,index,temp->val);
        temp->right=helper(preorder,index,val);
        return temp;
    }
};