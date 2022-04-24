class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> histo(26,0);
        vector<int> copy(26,0);
        if(s.length() < p.length())
            return ans;
        int length=p.length();
        for(int i = 0 ; i < length ; i ++)
        {
            histo[p[i]-'a']++;
            copy[p[i]-'a']++;
        }
        bool flag=true;
        for(int i = 0 ; i <= s.length()-length ; i++)
        {
            for(int k = i ; k<i+length ; k++){
                if(histo[s[k]-'a']!=0)
                    histo[s[k]-'a']--;
                else
                    break;
            }
            if(isEmpty(histo))
                ans.push_back(i);
            fill(histo,copy);
            
        }
        return ans;
    }
    bool isEmpty(vector<int>& cp)
    {
        for(int i = 0 ; i < cp.size() ; i++)
            if(cp[i]!=0)
                return false;
        return true;
    }
    void fill(vector<int>& histo,vector<int>& copy)
    {
        for(int i = 0 ; i < histo.size() ; i++)
            histo[i]=copy[i];
    }
};