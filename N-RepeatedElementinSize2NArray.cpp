class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        map<int,int> mp;
        for(int num : nums)
        {
            mp[num]++;
            if(mp[num]==(nums.size()/2))
                return num;
        }
        return -1;
    }
};