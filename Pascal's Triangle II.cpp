class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
      long int nCr=1;
        
        for(int i=0;i<rowIndex+1;i++){
            ans.push_back(nCr);
            nCr=nCr*(rowIndex-i)/(i+1);
        }
        return ans;
    }
};