class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int moves=0;
        int cnt=0;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            
            s[i]=='(' ? cnt++ : cnt--;
           cnt< 0 ? moves++,cnt=0 :NULL ;
        }
        return moves+cnt;
    }
};