#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

auto main() -> int {
    using namespace std;
    int N;
    cin >> N;
    vector<long> dp{0}, prev;
    for (int n = 0; n < N; ++n) {
        int w, h, b;
        cin >> w >> h >> b;
        swap(dp, prev);
        const auto M = size(prev);
        dp.resize(M + w);
        for (int i = 0; i < M; ++i) {
            dp[i] = max(dp[i], prev[i] + h); // Attach to head
            dp[i + w] = max(dp[i + w], prev[i] + b); // Attach to body
        }
    }
    cout << ranges::max(dp | views::drop(size(dp) / 2)) << endl;
    return 0;
}