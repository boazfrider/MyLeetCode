class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i;
        for(i=0 ; i < n ; i++ )
        {
            ans.push_back(nums[i]);
        }
         for(i=0 ; i <n ; i++ )
        {
           
            ans.push_back(nums[i]);
        }
        return ans;
    }
};