class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        int count=0;
        for(string str:words1)
        {
            if(str.length()>=1)
                mp1[str]++;
        }
        for(string str:words2)
        {
            if(str.length()>=1){
                mp2[str]++;
            }
               
        }
        for(string it : words1)
        {
            if(mp1[it]==1 && mp2[it]==1)
                count++;
        }
        return count;
    }
};