#include <bits/stdc++.h>
using namespace std;

int shortestPath(int V, vector<pair<int,int>> edges, int start, int end) {
    vector<vector<int>> g(V);
    for (auto &e : edges) {
        g[e.first].push_back(e.second);
        g[e.second].push_back(e.first);
    }
    vector<int> dist(V, -1);
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : g[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist[end];
}

int main() {
    int V = 5;
    vector<pair<int,int>> edges = {{0,1},{0,2},{1,3},{2,3},{3,4}};
    int start = 0, end = 4;
    cout << shortestPath(V, edges, start, end);
}
