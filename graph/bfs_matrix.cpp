#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//Graph used graph.png


// Time Complexity: O(V^2)
// Space Complexity: O(V)
// Using Adjacency Matrix

void bfs(vector<vector<int>> &graph, int v) {
    vector<bool> visited(v,false);
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();
        for(int i = 0; i < v; i++) {
            if(graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    int v = 5,e = 5;
    vector<vector<int>> graph(v, vector<int>(v, 0));
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[0][3] = 1;
    graph[1][2] = 1;
    graph[2][4] = 1;

    bfs(graph,v);
    return 0;
}

