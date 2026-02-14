# Problem: https://codeforces.com/contest/1899/problem/C
# Submission: https://codeforces.com/contest/1899/submission/361299141
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:25

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        
        int ans = a[0];
        int mn = min(0, a[0]), sum = a[0];
        for (int i = 1; i < n; ++i) {
            if (abs(a[i] % 2) == abs(a[i - 1] % 2)) {
                mn = 0;
                sum = 0;
            }
            sum += a[i];
            ans = max(ans, sum - mn);
            mn = min(mn, sum);
        }
        cout << ans << endl;
    }
}
