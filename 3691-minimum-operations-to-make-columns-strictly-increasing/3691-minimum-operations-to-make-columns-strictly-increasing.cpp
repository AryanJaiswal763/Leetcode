class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int count=0;

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]<=grid[i-1][j])
                {
                    while(grid[i][j]<=grid[i-1][j])
                    {
                        grid[i][j]++;
                        count++;
                    }
                }
            }
        }

        return count;
    }
};