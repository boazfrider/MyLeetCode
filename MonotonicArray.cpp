class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incrasing;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            incrasing=nums[i+1]-nums[i]>=0 ? true : false;
            if(incrasing==false)
                break;
        }
            
      
        for(int i = 0 ; i<nums.size()-1 ; i++)
        { 
            if(incrasing){
            if(nums[i+1]>=nums[i])
                continue;
            else
                return false;
            }
            else
            {
                if(nums[i+1]<=nums[i])
                    continue;
                else
                    return false;
            }
        }
        return true;
       
            
        }
    
};