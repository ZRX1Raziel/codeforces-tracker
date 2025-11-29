# Problem: https://codeforces.com/contest/577/problem/A
# Submission: https://codeforces.com/contest/577/submission/348193073
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:28

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    if (!(cin >> n >> x)) return 0;

    ll limit = min(n, x);
    ll cnt = 0;
    for (ll i = 1; i <= limit; ++i) {
        if (x % i == 0) {
            ll j = x / i;
            if (j <= n) ++cnt;
        }
    }
    cout << cnt << '\n';
    return 0;
}
