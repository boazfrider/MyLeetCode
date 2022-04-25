class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int,int> helper;
        
        for(int num : nums)
        {
            helper[num]++;
        }
        int sum=0;
        
        for(int num:nums)
        {
            if(helper[num]==1)
                sum+=num;
        }
        return sum;
    }
};