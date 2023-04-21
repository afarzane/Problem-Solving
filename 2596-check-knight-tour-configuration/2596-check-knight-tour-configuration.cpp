class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        
        int n = grid.size();
        
        if(grid[0][0] != 0){return false;}
        
        int iterations = n*n-1;
        int increment = 1;
        int row = 0;
        int col = 0;
        int new_row;
        int new_col;
        int row_incr[8] = {-1,-2,-2,-1,1,2,2,1};
        int col_incr[8] = {-2,-1,1,2,2,1,-1,-2};
        
        while(increment <= iterations){
            bool flag = false;
            for(int i = 0; i < 8; i++){
                new_row = row + row_incr[i];
                new_col = col + col_incr[i];
                
                if(new_row < 0 || new_row >= n || new_col < 0 || new_col >= n || grid[new_row][new_col]!=increment){
                    continue;
                }
                  
                flag = true;
                   
                increment++;
                row = new_row;
                col = new_col;
            }
            
            if(!flag){return false;}
            
        }
        return true;
    }
};