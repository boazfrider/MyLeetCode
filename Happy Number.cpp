#include <algorithm>
#include <vector>
class Solution {
public:
    vector<int> ans{0};
    bool isHappy(int n) {
        if(n==1)
            return true;
       for(int k=0 ; k<ans.size()-1;k++)
       {
           if(ans.at(k)==n)
               return false;
       }
            
        vector<int> arr;
        while(n!=0)
        {
            arr.push_back(n%10);
            n/=10;
        }
        int x=0;
        for(int i=0; i < arr.size();i++){
            x=x+(arr[i]*arr[i]);
            
        }
        std::cout<<x<<std::endl;
        ans.push_back(x);
       return isHappy(x);
        
        
    }
};