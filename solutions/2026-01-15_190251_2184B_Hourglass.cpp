# Problem: https://codeforces.com/contest/2184/problem/B
# Submission: https://codeforces.com/contest/2184/submission/357588323
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:51

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long f = m / k;   
        long long ans;

        if (f == 0) {
            ans = max(0LL, s - m);
        } else {
            long long sand;
            if (s <= k) {
                sand = s;
            } else {
                if (f % 2 == 1) sand = k;
                else sand = s;
            }
            long long elapsed = m - f * k;
            ans = max(0LL, sand - elapsed);
        }

        cout << ans << '\n';
    }
}
