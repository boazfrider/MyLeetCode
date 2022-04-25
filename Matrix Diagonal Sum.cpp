class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        
        for(int i = 0 , j=mat.size()-1 ; i<mat.size() ; i++,j--)
        {
            
            sum=sum+mat[i][i]+mat[i][j];
        }
        int n=mat.size();
        if(n%2==1)
            sum-=mat[(n-1)/2][(n-1)/2];
        return sum;
    }
};
