class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        int sets=k%nums.size();
        for(int i=0 ; i<nums.size();i++)
            temp[i]=nums[(nums.size()-sets+i)%nums.size()];
        for(int i=0 ; i<nums.size() ;i++)
            nums[i]=temp[i];
        
    }
};