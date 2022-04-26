class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans="";
        for(int i = 0 ; i<s.length(); i++)
        {
            for(int k=0 ; k < s.length();k++){
                if(indices[k]==i)
                {
                    ans.push_back(s[k]);
                    continue;
                }
            }
            
        }
        return ans;
    
        
    }
};