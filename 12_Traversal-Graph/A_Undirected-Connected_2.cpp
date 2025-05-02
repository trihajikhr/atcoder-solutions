#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

inline void fastio(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}

void dfsRec(vector<vector<int>>&adj, vector<bool>&visited, int s, vector<int>&rest){
    visited[s]=true;

    rest.push_back(s);

    for(auto x: adj[s]){
        if(visited[x]==false){
            dfsRec(adj, visited, x, rest);
        }
    }
}

void addEdge(vector<vector<int>>&adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> DFS (vector<vector<int>>&adj){
    vector<bool> visited(adj.size(), false);
    vector<int> rest;
    dfsRec(adj, visited, 0, rest);
    return rest;
}

int main() {
    fastio();
    int n,m;
    cin >> n >>m;

    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;

        addEdge(adj, u,v);
    }

    vector<int> rest = DFS(adj);

    // output
    for(auto&x:rest){
        cout << x << " ";
    }
    return 0;
}