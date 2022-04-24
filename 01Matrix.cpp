class Solution {
public:
 vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        queue<pair<int,int>> bfsQ;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    bfsQ.push({i,j});
                }     

        vector<pair<int, int>> dir={{-1,0},{1,0},{0,1},{0,-1}};
        while(!bfsQ.empty()){
            auto [a,b]= bfsQ.front();
            bfsQ.pop();
            for(auto [p,q]: dir){
                int newA=a+p;
                int newB=b+q;
                if(newA<0||newB<0||newA>=n||newB>=m)
                    continue;
                if(ans[newA][newB]>ans[a][b]+1){
                    ans[newA][newB] = ans[a][b]+1;
                    bfsQ.push({newA, newB});           
                } 
            }
        }
        return ans;
        
    }
};