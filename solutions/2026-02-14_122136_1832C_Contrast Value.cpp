# Problem: https://codeforces.com/contest/1832/problem/C
# Submission: https://codeforces.com/contest/1832/submission/361883063
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:36

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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Remove consecutive duplicates
        vector<long long> v;
        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                v.push_back(a[i]);
            }
        }

        int m = v.size();
        if (m <= 2) {
            cout << m << "\n";
            continue;
        }

        int ans = 1; // first element
        for (int i = 1; i + 1 < m; i++) {
            long long d1 = v[i] - v[i - 1];
            long long d2 = v[i + 1] - v[i];
            if (d1 * d2 < 0) {
                ans++;
            }
        }
        ans++; // last element

        cout << ans << "\n";
    }
    return 0;
}
