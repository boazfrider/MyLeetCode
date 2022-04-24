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
class BSTIterator {
public:
    vector<int> inorder;
    int index;
    BSTIterator(TreeNode* root) {
        index=0;
      help(inorder,root);
    }
    void help(vector<int>& ans,TreeNode* root)
    {
        if(!root)
            return;
        help(ans,root->left);
        ans.push_back(root->val);
        help(ans,root->right);
    }
    
    int next() {
       int num=inorder[index];
        index++;
        return num;
        
    }
    
    bool hasNext() {
         if(index<inorder.size() )
             return 1;
        return 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */