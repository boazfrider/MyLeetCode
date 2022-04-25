class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> helper;
        
        for(int k = 0 ; k < paths.size() ; k++)
        {
            for(int j = 0 ; j < paths[k].size()-1 ; j++)
            {
                helper[paths[k][j]]=paths[k][j+1];
            }
        }
        string start="temp",end="temp",temp="a";
        start=paths[0][0];
        while(start!="")
        {
            end=start;
            start=helper[start];
           // cout<<start;
        }
        return end;
    }
};