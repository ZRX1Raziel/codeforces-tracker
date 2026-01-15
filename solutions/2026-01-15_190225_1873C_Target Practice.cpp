# Problem: https://codeforces.com/contest/1873/problem/C
# Submission: https://codeforces.com/contest/1873/submission/356531791
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:25

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int score = 0;
        for (int i = 0; i < 10; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < 10; j++) {
                if (row[j] == 'X') {
                    int d = min({i, j, 9 - i, 9 - j});
                    score += d + 1;
                }
            }
        }
        cout << score << '\n';
    }

    return 0;
}
