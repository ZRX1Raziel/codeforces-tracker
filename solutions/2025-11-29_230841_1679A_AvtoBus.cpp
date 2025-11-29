# Problem: https://codeforces.com/contest/1679/problem/A
# Submission: https://codeforces.com/contest/1679/submission/349331616
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:41

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;

        // No solution if n is odd or n == 2
        if (n % 2 == 1 || n == 2) {
            cout << -1 << "\n";
            continue;
        }

        // max buses = floor(n / 4)
        long long max_buses = n / 4;

        // min buses = ceil(n / 6)
        // ceil(n/6) = (n + 5) / 6 for integers
        long long min_buses = (n + 5) / 6;

        cout << min_buses << " " << max_buses << "\n";
    }

    return 0;
}
