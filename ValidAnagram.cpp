class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> mp(26,0);
        for(char ch : s)
        {
            mp[ch-'a']++;
        }
        for(char ch : t)
        {
            if(mp[ch-'a'])
                mp[ch-'a']--;
            else
                return false;
        }
        for(int i : mp)
            if(i!=0)
                return false;
        return true;
        
    }
};