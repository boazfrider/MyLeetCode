class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
       // vector<string> temp1,temp2;
        unordered_map<string,int> temp1,temp2;
        
        string temp="";
        string tempsec="";
        int i=0;
        int k=0;
        while(s1[i])
        {
            if(s1[i]==' ')
            {
                temp1[temp]++;
                temp="";
                i++;
                continue;
            }
            temp+=s1[i];
            i++;
        } temp1[temp]++;
        temp="";
        while(s2[k])
        {
            if(s2[k]==' ')
            {
                  temp2[temp]++;
                temp="";
                k++;
                continue;
            }
            temp+=s2[k];
            k++;
        } temp2[temp]++;
        for(auto i : temp1)
        {
            if(temp2.find(i.first) == temp2.end()&& temp1[i.first] == 1)
                ans.push_back(i.first);
        }
        for(auto i : temp2)
        {
            if(temp1.find(i.first) == temp1.end()&& temp2[i.first] == 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};