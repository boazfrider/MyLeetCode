class Solution {
public:
    string defangIPaddr(string s) {
        string ans="";
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i]!='.')
                ans+=s[i];
            if(s[i+1]=='.')
            {
                ans+="[.]";
                    i++;
            }
                
        }
        return ans;
        
    }
};