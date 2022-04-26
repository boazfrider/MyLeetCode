class Solution {
public:
   
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int len=nums.size();
        int diff;
        for(int i=0 ; i < len ; i++)
        {
            diff=target-nums[i];
            for(int k=i+1; k<len ; k++)
            {
                if(nums[k]==diff)
                    return {i,k};
            }
        }
        return {};
        
        
    }
    
};