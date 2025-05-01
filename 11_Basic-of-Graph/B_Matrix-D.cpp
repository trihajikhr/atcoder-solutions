#include<vector>
#include<iostream>
using namespace std;

inline void fastio(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}

int main() {
    fastio();
    int n,m;
    cin >> n >> m;

    vector<vector<int>> adj (n+1, vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;

        adj[u][v]=1;
    }

    cout << "\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}