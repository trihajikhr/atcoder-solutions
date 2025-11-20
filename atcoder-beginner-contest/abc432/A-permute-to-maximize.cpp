#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    array<int, 3> arr{};
    for (auto& x : arr) cin >> x;
    ranges::sort(arr, greater<>());
    for (const auto& x : arr) cout << x;
    return 0;
}