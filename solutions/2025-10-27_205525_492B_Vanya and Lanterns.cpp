# Problem: https://codeforces.com/contest/492/problem/B
# Submission: https://codeforces.com/contest/492/submission/345084955
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:55:25

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double l;
    cin >> n >> l;
    vector<double> lights(n);
    for(int i = 0; i < n; i++) cin >> lights[i];

    sort(lights.begin(), lights.end());

    double max_gap = 0;
    for(int i = 1; i < n; i++)
        max_gap = max(max_gap, lights[i] - lights[i-1]);

    double d = max(lights[0], l - lights[n-1]); // edge gaps
    d = max(d, max_gap / 2);                     // middle gaps

    cout << fixed << setprecision(10) << d << '\n';
}
