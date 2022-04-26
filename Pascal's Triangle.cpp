class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    int level=1;
    int i=0;
    int k=0;
    vector<int> part;
    vector<vector<int>> result;
    for(int i=0 ; i<numRows ; i++)
    {
         
        for(int k = 0 ; k<level; k++)
        {
            if(k==0)
            {
                part.push_back(1);
            }
           else if(k==i)
            {
                part.push_back(1);
            }
            else{
                part.push_back(result.at(i-1).at(k-1)+result.at(i-1).at(k));
            }
        }
        result.push_back(part);
       part.clear();
        level++;
    }
     return result;   
    }
};