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
    TreeNode* increasingBST(TreeNode* root) {
        
        stack<int> st;
        helper(root,st);
        TreeNode* ans=new TreeNode();
        TreeNode* help=ans;
        int i=st.top();
        while(st.empty()==false)
        {
            i=st.top();
            ans->val=i;
            st.pop();
            if(st.empty()==false)
                ans->right=new TreeNode(i);
            ans=ans->right;
         
        }
        return help;
        
        
        
    }
    void helper(TreeNode* root, stack<int> &st)
    {
        if(root==NULL){
            return;   
        }
        helper(root->right,st);
        
        st.push(root->val);
        cout<<root->val <<endl;
        helper(root->left,st);
    
    }
};