class Solution {
public:
   
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max=0;
        int temp=0;
        for(int i=0 ; i<grid.size(); i++)
        {
            for(int k=0 ; k<grid[i].size(); k++)
            {
                
                temp=checkAndCount(grid,i,k);
                if(temp>max){
                std::cout<<"here";
                max=temp;
            }
            }
            
            temp=0;
                
        }
        return max;
        
    }
    int checkAndCount(vector<vector<int>>& grid , int row , int col)
    {
        //basics check
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size()||grid[row][col]==0)
            return 0;
          std::cout<<row<<","<<col<<std::endl;
        grid[row][col]=0;
        return 1+checkAndCount(grid,row-1,col)+checkAndCount(grid,row,col-1)+checkAndCount(grid,row+1,col)+checkAndCount(grid,row,col+1);
        
    }
};