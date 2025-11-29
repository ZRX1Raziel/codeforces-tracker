# Problem: https://codeforces.com/contest/270/problem/A
# Submission: https://codeforces.com/contest/270/submission/350515271
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:16

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;

        if (a >= 180) {
            cout << "NO\n";
            continue;
        }

        int x = 180 - a;

        if (360 % x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
