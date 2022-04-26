class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // int len=nums.size();
        int res=0;
        for(int i=0 ; i < nums.size() ; i++){
            res^=nums[i];
        }
        return res;
        
    }
};