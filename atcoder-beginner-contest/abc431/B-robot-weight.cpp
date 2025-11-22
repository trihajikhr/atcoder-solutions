#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sum;
    cin >> sum;
    int n;
    cin >> n;
    vector<pair<int, int>> at(n+1);
    for (int i=1; i<=n; i++) {
        cin >> at[i].first;
        at[i].second = 0;
    }

    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        if (at[y].second) {
            sum -= at[y].first;
            cout << sum << '\n';
            at[y].second = 0;
        } else {
            sum += at[y].first;
            at[y].second = 1;
            cout << sum << '\n';
        }
    }
    return 0;
}