class Solution {
public:

    void dfs(int node,vector<int>adj[],vector<bool>&visited){
        visited[node]=true;
        for(auto neigh:adj[node]){
            if(!visited[neigh]){
                dfs(neigh,adj,visited);
            }

        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1&&i!=j){
                    adj[i].push_back(j);
                }
            }
        }

        vector<bool>visited(n,false);
        int pr=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                pr++;
                dfs(i,adj,visited);
            }
        }
        return pr;
    }
};