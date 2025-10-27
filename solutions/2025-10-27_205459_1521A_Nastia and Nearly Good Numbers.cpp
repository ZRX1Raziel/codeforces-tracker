# Problem: https://codeforces.com/contest/1521/problem/A
# Submission: https://codeforces.com/contest/1521/submission/343590399
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:54:59

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        long long A, B;
        cin >> A >> B;
        if (B == 1) {
            cout << "NO\n";
        } else if (B == 2) {
            cout << "YES\n";
            cout << A << " " << 3*A << " " << 4*A << "\n";
        } else {
            cout << "YES\n";
            cout << A << " " << A*(B-1) << " " << A*B << "\n";
        }
    }
    return 0;
}
