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
    vector<pair<int,int>> edges;

    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;

        edges.push_back({u,v});
        edges.push_back({v,u});
    }

    cout << "\nHasil:\n";
    for(const auto&x:edges){
        cout << x.first << " -> " << x.second << "\n";
    }
    cout << "\n";
    return 0;
}