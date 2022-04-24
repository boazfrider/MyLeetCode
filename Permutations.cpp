class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> garbage;
        vector<int> temp;
        vector<vector<int>> ans;
        helper(ans,nums,garbage,temp);
        return ans;
    }
    
    void helper(vector<vector<int>>& ans,vector<int>& nums ,vector<int>& garbage,vector<int> temp)
    {
        int i=0;
        for( i=0 ; i<nums.size() ; i++)
        {
            if(isthere(garbage,nums[i])==false)
            {
                temp.push_back(nums[i]);
                garbage.push_back(nums[i]);
                if(garbage.size()==nums.size())
                {
                    ans.push_back(temp);
                    garbage.pop_back();
                    temp.pop_back();
                    return;
                }
                helper(ans,nums,garbage,temp);
                garbage.pop_back();
                temp.pop_back();
            } 
    
         }
    }
    
    bool isthere(vector<int>& arr, int k)
    {
        for(int i=0; i<arr.size() ; i++)
        {
            if(arr[i]==k)
                return true;
            
        }
        return false;
    }
};