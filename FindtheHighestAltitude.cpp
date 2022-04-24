class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        
        for(int i = 0 ; i < gain.size(); i++)
        {
            alt.push_back(alt[i]+gain[i]);
        }
        return max(alt);
    }
    int max(vector<int>& alt)
    {
        int max=alt[0];
        for(int i = 0 ; i < alt.size() ; i++)
        {
            if(alt[i]>max)
                max=alt[i];
        }
        return max;
    }
};