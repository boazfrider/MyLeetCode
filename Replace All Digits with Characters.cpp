class Solution {
public:
    string replaceDigits(string s) {
        string ans;
        for(int i=1 ; i<s.length(); )
        {
           s[i]= (s[i-1])+(s[i]-'0');
            cout<<s<<endl;
            i+=2;
        }
        if(s.length()%2==1)
            ans+=s[s.length()-1];
        return s;
        
    }
    
};