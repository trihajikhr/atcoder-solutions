#include<iostream>
#include<vector>
using namespace std;

inline void fastio(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}

const int INF = 1e9;

int main() {
    fastio();
    int n,m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1, vector<int>(n+1, INF));
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;

        adj[u][v]=w;
        adj[v][u]=w;
    }

    cout << "\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(adj[i][j]==INF) cout << "INF ";
            else cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    
    return 0;
}