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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        int maxnum=max(nums);
        cout<<maxnum<<endl;
        TreeNode* root=new TreeNode(maxnum);
        vector<int> templeft;
        vector<int> tempright;
        int indexequal=0;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i]!=maxnum)
                templeft.push_back(nums[i]);
            if(nums[i]==maxnum){
                indexequal=i;
                 break;
            }
        }
        for(int i = indexequal+1 ; i<nums.size() ; i++)
        {
            tempright.push_back(nums[i]);
        }
        root->left=constructMaximumBinaryTree(templeft);
        root->right=constructMaximumBinaryTree(tempright);
        return root;
    }
    int max(vector<int>& nums)
    {
        int max=0;
        if(nums.size()==0)
            return 0;
        for(int i = 0 ; i < nums.size() ; i++)
            if(nums[i]>max) max=nums[i] ;
            
        return max;
    }
};