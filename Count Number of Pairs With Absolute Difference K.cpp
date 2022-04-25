class Solution {
public:
    int countKDifference(vector<int>& nums, int j) {
        int count=0;
        for(int i = 0 ; i <nums.size()-1 ; i++)
        {
            for(int k=i+1; k<nums.size();k++)
            {
                if(abs(nums[i]-nums[k])==j)
                    count++;
            }
        }
        return count;
        
    }
};