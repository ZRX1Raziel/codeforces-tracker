# Problem: https://codeforces.com/contest/1374/problem/A
# Submission: https://codeforces.com/contest/1374/submission/356206794
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:19

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;
        cout << n - (n - y) % x << '\n';
    }
    return 0;
}
