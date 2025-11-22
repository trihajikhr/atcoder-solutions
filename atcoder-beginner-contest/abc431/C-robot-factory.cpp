#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

using VI = vector<int>;
void print(const VI& vec) {
    for (const auto& x : vec) {
        cerr << x << " ";
    }
    cerr << "\n";
}

#define debug(x) cerr << "value: " << x << "\n";

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> head(n), body(m);
    for (auto& x : head) cin >> x;
    for (auto& x : body) cin >> x;

    ranges::sort(head);
    ranges::sort(body);

    print(head);
    print(body);

    int l = 0, r = 0;
    while ((l < n) && (r < m)) {
        if (head[l] <= body[r]) {
            l++, r++, k--;
        }
        else {
            r++;
        }

        if (k == 0) break;
    }

    cout << (k==0 ? "Yes" : "No");
    return 0;
}