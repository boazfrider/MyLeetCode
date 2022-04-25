class Solution {
public:
    string toLowerCase(string s) {
        
        int num='A'-'a';
        
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]-=num;
        }
        return s;
        
    }
};