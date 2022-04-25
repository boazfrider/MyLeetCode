class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size()-1;
        vector<int> ans(nums.size());
        int i=0;
        int j=nums.size()-1;
        
        while(i<=j)
        {
            if(nums[j]*nums[j]>=nums[i]*nums[i])
            {
                ans[n]=nums[j]*nums[j];
                j--;
            }
            else{
                ans[n]=nums[i]*nums[i];
                i++;
            }
            n--;
        }
        return ans;
    }
};