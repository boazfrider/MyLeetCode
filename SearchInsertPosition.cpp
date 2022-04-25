class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int middle;
        int keep;
        
        while(left<=right)
        {
            middle=(left+right)/2;
            
            if(nums[middle]==target)
                return middle;
            if(nums[middle]>target)
            {
                right=middle-1;
            }
            else{
                left=middle+1;
            }
        }
        if(nums[middle]<target)
            middle++;
        return middle;
    }
};