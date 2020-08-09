class Solution {
public:
    int rot(vector<vector<int>>& grid,int i,int j,int day)
    {
        if(i<0 || i>grid.size()-1 || j<0 || j>grid[0].size()-1 || grid[i][j]!=1) return 0;
        grid[i][j]=day+3;
        return 1;
        
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        int min=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(grid[i][j]==1)fresh++;
        }
        int temp=0;
        while(fresh>0)
        {
            int new_fresh=fresh;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[i][j]==min+2)
                    {
                        temp=rot(grid,i-1,j,min)+rot(grid,i+1,j,min)+rot(grid,i,j-1,min)+rot(grid,i,j+1,min);
                        new_fresh=new_fresh-temp;
                    }
                }
            }
            if(new_fresh==fresh) return -1;
            min++;
            fresh=new_fresh;   
        }
        return min;
        
    }
};