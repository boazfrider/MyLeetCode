class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0 ; i < nums.size()-1 ; i+=2)
        {
            for(int k=0 ; k<nums[i] ; k++)
                ans.push_back(nums[i+1]);
        }
        return ans;
    }
};