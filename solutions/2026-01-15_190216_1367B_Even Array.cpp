# Problem: https://codeforces.com/contest/1367/problem/B
# Submission: https://codeforces.com/contest/1367/submission/356089130
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:16

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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int even_pos = (n + 1) / 2;   // indices 0,2,4,...
        int odd_pos  = n / 2;         // indices 1,3,5,...

        int even_val = 0, odd_val = 0;
        for (int x : a) {
            if (x % 2 == 0) even_val++;
            else odd_val++;
        }

        // Impossible case
        if (even_pos != even_val || odd_pos != odd_val) {
            cout << -1 << '\n';
            continue;
        }

        // Count mismatches
        int bad_even = 0, bad_odd = 0;
        for (int i = 0; i < n; i++) {
            if ((i % 2) != (a[i] % 2)) {
                if (i % 2 == 0) bad_even++;
                else bad_odd++;
            }
        }

        // Each swap fixes one bad_even and one bad_odd
        cout << bad_even << '\n';
    }
    return 0;
}
