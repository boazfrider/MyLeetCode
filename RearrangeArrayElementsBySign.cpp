class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int neg=0;
        int pos=0;
        
        while(nums[neg]>0)
            neg++;
        while(nums[pos]<0)
            pos++;
        
        while(pos < nums.size() && neg<nums.size())
        {
            ans.push_back(nums[pos]);
            ans.push_back(nums[neg]);
            neg++;
            pos++;
            while(neg<nums.size()&&nums[neg]>0  )
                neg++;
            while(pos<nums.size()&&nums[pos]<0  )
                pos++;
        }
        return ans;
    }
};