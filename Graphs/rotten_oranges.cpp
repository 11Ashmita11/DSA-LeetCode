class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0){
            return 0;
        }
        int minutes=0;

        while(!q.empty()&&fresh>0){
            int dr[]={-1,1,0,0};
            int dc[]={0,0,-1,1};

            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto curr=q.front();
                q.pop();
                int r=curr.first;
                int c=curr.second;
                for(int k=0;k<4;k++){
                    int nr=r+dr[k];
                    int nc=c+dc[k];
                    if(nr>=0&&nc>=0&&nr<n&&nc<m&&grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        fresh--;
                        q.push({nr,nc});
                    }
                }
            }
           
            minutes++;
        }
        return fresh==0?minutes:-1;

    }
};