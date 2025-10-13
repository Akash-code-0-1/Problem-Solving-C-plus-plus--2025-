#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>> &graph, int n){
    vector<bool> visited(n,false);
    queue<int>q;

    visited[start]=true;
    q.push(start);
    
    cout<<"BFS Traversal: ";

    while(!q.empty()){
        int node= q.front();
        q.pop();

        cout<< node<<" ";

        for(int neighbor: graph[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }

    }
    cout<<endl;

}

int main()
{
    int n = 5; // 0-4
    vector<vector<int>> graph = {
        {1, 2},    // 0 connected to 1,2
        {0, 3, 4}, // 1 connected to 0,3,4
        {0},       // 2 connected to 0
        {1},       // 3 connected to 1
        {1}        // 4 connected to 1
    };

    bfs(0, graph, n);
}