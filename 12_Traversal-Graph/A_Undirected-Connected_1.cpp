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

    for(int i:adj[s]){
        if(visited[i]==false){
            dfsRec(adj, visited, i, rest);
        }
    }
}

vector<int> DFS (vector<vector<int>>&adj){
    vector<bool> visited(adj.size(), false);
    vector<int> rest;
    dfsRec(adj, visited, 0, rest);
    return rest;
}

void addEdge(vector<vector<int>>&adj, int s, int t){
    adj[s].push_back(t);
    adj[t].push_back(s);
}

int main() {
    fastio();
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;

        addEdge(adj, u,v);
    }

    vector<int> rest = DFS(adj);

    // output
    for(const auto&x:rest){
        cout << x << " ";
    }
    return 0;
}
