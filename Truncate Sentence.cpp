class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans="";
        int i=0;
        while(k>0 && s[i])
        {
            if(s[i]==' ')
                k--;
            if(k==0)
                return ans;            
            ans+=s[i];

            i++;
        }
        return ans;
        
        
    }
};