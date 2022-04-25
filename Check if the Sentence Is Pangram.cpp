class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector<int> histo(26,0);
        
        for( char ch : sentence)
        {
            histo[ch-'a']++;
        }
        for(int i=0; i<histo.size() ; i++)
        {
            if(histo[i]==0)
                return false;
        }
        return true;
    }
};