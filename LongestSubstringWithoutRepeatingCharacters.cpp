class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> mp;
        int ans=0;
        
        for(int i=0 , j=0 ; j<s.length() ; j++)
        {
            char ch=s[j];
            while(mp.count(ch)){
                mp.erase(s[i]);
                i++;
            }
            mp[ch]++;
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};