class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int> temp;
        
        help(ans,temp,1,k,n);
        return ans;
    }
        
        void help(vector<vector<int>>& result,vector<int>& temp , int start ,int k,int n)
        {
            if(k==0){
                result.push_back(temp);
                return;
            }
            for(int i=start ; i<=n ; i++)
            {
                temp.push_back(i);
                help(result,temp,i+1,k-1,n);
                temp.pop_back();
            }
            
        return;
        
    }
};