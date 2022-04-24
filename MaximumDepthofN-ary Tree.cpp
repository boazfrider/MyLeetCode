/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        int maxnum=0;
        int num=0;
        helper(root,num,maxnum);
        return maxnum;
    }
    
    void helper(Node* root, int num , int& maxnum)
    {
        if(root==NULL)
            return;
        num++;
        maxnum=max(maxnum,num);
        //if there is children
     
            for(int i=0 ;  i< (root->children).size() ; i++)
            {
                helper(root->children[i],num,maxnum);
            }
        
    }
};