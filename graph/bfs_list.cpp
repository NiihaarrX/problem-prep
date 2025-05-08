#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//Graph used graph.png


// Time Complexity: O(V + E)
// Space Complexity: O(V)
// Using Adjacency List

void bfs(vector<vector<int>> &graph, int v) {
    vector<bool> visited(v,false);
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();
        for(int it:graph[node]) {
            if(!visited[it]) {
                visited[it] = true;
                q.push(it);
            }
        }
    }
    
}

int main() {
    int e = 5,v = 5;
    vector<vector<int>> graph(v);
    graph[0] = {1,2,3};
    graph[1] = {0,2};
    graph[2] = {0,1,4};
    graph[3] = {0};
    graph[4] = {2};

    bfs(graph,v);
    return 0;
}