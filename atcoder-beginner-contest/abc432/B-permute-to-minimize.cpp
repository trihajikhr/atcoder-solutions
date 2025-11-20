#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n, zer=0;
    cin >> n;
    vector<int> v;
    while (n > 0) {
        int t = n % 10;
        if (t == 0) zer++;
        else v.push_back(t);
        n /= 10;
    }

    ranges::sort(v);
    cout << v[0];
    if (zer) while (zer--) cout << 0;
    for (int i=1; i<v.size(); i++) {
        cout << v[i];
    }
    return 0;
}