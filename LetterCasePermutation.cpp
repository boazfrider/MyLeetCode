class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
      
        helper(s,0,ans);
        return ans;
        
       
    }
    void helper(string s , int i , vector<string>& ans)
    {
        if(i==s.length())
        {
            ans.push_back(s);
            return;
        }
        if(isnum(s[i]))
        {  
            helper(s,i+1,ans);  
        }
        else{
        s[i]=tolower(s[i]);
        helper(s,i+1,ans);
        s[i]=toupper(s[i]);
        helper(s,i+1,ans);
 
        }
        

    }
    
    bool isnum(char ch)
    {
        cout<<ch;
        if(ch>='0' && ch<='9')
            return true;
        return false;
    }
}; 
//change to upper.
//temp[0]=toupper( temp[0]);