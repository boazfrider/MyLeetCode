class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> histo1(256,0);
            vector<int> histo2(256,0);
        
       // std::cout<< c-a;
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(histo1[s[i]]!=histo2[t[i]])
                return false;
           histo1[s[i]]=i+1;
            histo2[t[i]]=i+1;
        }
        return true;
    }
};