class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        int left=0,right=numbers.size()-1;
      
        while(numbers[left]+numbers[right]!=target)
        {
            if(numbers[left]+numbers[right]>target)
                right--;
            else
                left++;
        }
        ans.push_back(++left);
        ans.push_back(++right);
        return ans;
    }
};