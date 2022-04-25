class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> ans;
        vector<int> flag(n,0);
            for(int i = 0 ; i < target.size() ; i++)
            {
                flag[target[i]-1]++;
            }
        for(int k=0 ; k < flag.size() ; k++)
        {
            if(flag[k])
                ans.push_back("Push");
            if(flag[k]==0 && check(flag,k+1)==false)
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            if(check(flag,k))
                break;
        }
        return ans;
        
    }
    bool check(vector<int>& arr, int index)
    {
        for(int i=index ; i < arr.size() ; i++)
        {
            if(arr[i]==1)
                return false;
        }
        return true;
    }
};