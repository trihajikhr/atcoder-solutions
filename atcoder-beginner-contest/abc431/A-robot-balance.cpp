#include<iostream>
using namespace std;

auto main() -> int {
    int h, b;
    cin >> h >> b;
    cout << (h > b ? h-b : 0);
    return 0;
}