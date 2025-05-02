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

    vector<vector<pair<int,int>>> adj(n+1);

    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;

        adj[u].push_back({v,w});
    }

    cout <<"\n";
    for(int i=1;i<=n;i++){
        cout << "Cinta ke-" << i << " :\n";
        for(const auto&x:adj[i]){
            cout << "- Ke " << x.first << " sebesar " << x.second << "\n";
        }
        cout <<"\n";
    }
    cout <<"\n";
    return 0;
}