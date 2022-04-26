class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int cnt=count(nums.begin(),nums.end(),val);
        remove(nums.begin(),nums.end(),val);
        return n-cnt;
        
    }
};