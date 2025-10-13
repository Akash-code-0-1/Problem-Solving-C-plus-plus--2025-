#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &graph, vector<bool> &visited){
    visited[node]=true;
    cout<<node<<" ";

    for(int neighbor: graph[node]){
        if(!visited[neighbor]){
            dfs(neighbor, graph, visited);
        }
    }
  
}

int main(){
    int n=5;
    vector<vector<int>> graph={
        {1,2},
        {0,3,4},
        {0},
        {1},
        {1}
    };

    vector<bool>visited(n,false);
    cout<< "DFS Traversal: ";
    dfs(0, graph, visited);
      cout<<endl;
}