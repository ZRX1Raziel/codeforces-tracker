# Problem: https://codeforces.com/contest/584/problem/A
# Submission: https://codeforces.com/contest/584/submission/343181376
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:54:50

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string num = "";

    if (t == 10) {
        if (n == 1) {
            cout << -1 << '\n';
            return 0;
        }
        num = "1";
        num.append(n - 1, '0'); // append n-1 zeros
    } else {
        num.assign(n, '0' + t); // repeat t n times
    }

    cout << num << '\n';
    return 0;
}
