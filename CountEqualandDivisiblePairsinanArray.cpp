class Solution {
public:
    int countPairs(vector<int>& nums, int l) {
        int cnt=0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            for(int k =i+1 ; k<nums.size(); k++)
            {
                if(nums[i]==nums[k] && (i*k)%l==0)
                    cnt++;
            }
        }return cnt;
        
    }
};