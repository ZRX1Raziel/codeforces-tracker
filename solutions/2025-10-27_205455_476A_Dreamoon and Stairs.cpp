# Problem: https://codeforces.com/contest/476/problem/A
# Submission: https://codeforces.com/contest/476/submission/343413049
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:54:55

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_moves = (n + 1) / 2; // ceil(n/2)
    for (int x = min_moves; x <= n; x++) {
        if (x % m == 0) {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
