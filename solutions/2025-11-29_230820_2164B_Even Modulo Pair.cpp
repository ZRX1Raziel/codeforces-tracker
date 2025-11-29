# Problem: https://codeforces.com/contest/2164/problem/B
# Submission: https://codeforces.com/contest/2164/submission/348048909
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:20

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Check first 31 elements
        int limit = min(n, 31);
        bool found = false;
        long long x = -1, y = -1;

        for (int i = 0; i < limit && !found; ++i) {
            for (int j = i + 1; j < limit; ++j) {
                long long r = a[j] % a[i];
                if (r % 2 == 0) {
                    x = a[i];
                    y = a[j];
                    found = true;
                    break;
                }
            }
        }

        if (found) cout << x << " " << y << "\n";
        else cout << -1 << "\n";
    }
}
