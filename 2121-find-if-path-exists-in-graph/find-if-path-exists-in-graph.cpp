class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<int> &vis, int source){
        vis[source]=1;
        for(const auto &nbr:graph[source]){
            if(!vis[nbr]){
                dfs(graph, vis,nbr);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // unordered_map<int,vector<int>> graph;  //whats the size of this graph? could be 100
        vector<vector<int>> graph(n+1);  //whats the size of this graph? could be 100
        vector<int> vis(n+1);
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        dfs(graph, vis, source);
        return vis[destination]==1;
    }
};