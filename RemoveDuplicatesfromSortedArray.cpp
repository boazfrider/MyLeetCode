class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        int count=1;
        int i=0;
        for(int j=1 ; j < nums.size() ; j++)
        {
            if(nums[i]==nums[j])
                continue;
            else
            {
                nums[i+1]=nums[j];
                i++;
                count++;
            }
            
        }
        return count;
    }
};