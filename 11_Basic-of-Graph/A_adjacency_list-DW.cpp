#include<iostream>
#include<vector>
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

    vector<vector<int>> adj(n+1);

    for(int i=0;i<m;i++){
        int u,v;;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "\n";
    for(int i=1;i<=n;i++){
        cout << "Teman ke " << i << ":\n";
        for(const auto&x:adj[i]){
            cout << "- Berteman dengan " << x << "\n";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}