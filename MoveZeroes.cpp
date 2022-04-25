class Solution {
public:
    void swap(int& a,int& b)
    {
        int c=a;
        a=b;
        b=c;
    }
    void moveZeroes(vector<int>& nums) {
        
        int end=nums.size()-1;
        
        for(int i=0 ; i<nums.size();i++)
        {
            for(int k=0;k<end;k++)
            {
                if(nums[k]==0)
                    swap(nums[k],nums[k+1]);
            }
            end--;
        }
    }
};