#include<iostream>
#include<vector>
#include<tuple>
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

    vector<tuple<int,int,int>> edges;

    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;

        edges.push_back({u,v,w});
        edges.push_back({v,u,w});
    }

    cout << "\n";
    for(const auto&x:edges){
        int u,v,w;
        tie(u,v,w) = x;
        cout << u << " -> " << v << "(" << w << ")\n";
    }
    cout << "\n";
    return 0;
}