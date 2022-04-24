class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int min;
        int col=0;
        vector<int> ans;
        for(int i = 0 ; i< matrix.size() ; i++)
        {
            int min=INT_MAX;
            for(int k=0; k < matrix[i].size() ; k++)
            {
                if(matrix[i][k]<min)
                {
                    min=matrix[i][k];
                    col=k;
                }
            }
            if(max(matrix,col)==min)
                ans.push_back(min);
            
        }
        return ans;
    }
    
    int max(vector<vector<int>>& matrix, int col)
    {
        int max=0;
        
        for(int i = 0 ; i < matrix.size() ; i++)
        {
            if(matrix[i][col]>max)
                max=matrix[i][col];
        }
        return max;
    }
};