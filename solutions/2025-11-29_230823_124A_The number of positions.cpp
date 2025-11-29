# Problem: https://codeforces.com/contest/124/problem/A
# Submission: https://codeforces.com/contest/124/submission/348065689
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:23

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << n - max(a + 1, n - b) + 1 << "\n";
    return 0;
}
