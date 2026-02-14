# Problem: https://codeforces.com/contest/2194/problem/B
# Submission: https://codeforces.com/contest/2194/submission/362173305
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:42

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long S_all = 0;
        for (int i = 0; i < n; i++) {
            S_all += a[i] / x;
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long Si = S_all - (a[i] / x);
            long long cur = a[i] + Si * y;
            ans = max(ans, cur);
        }

        cout << ans << "\n";
    }
}
