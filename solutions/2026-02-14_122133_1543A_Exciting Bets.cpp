# Problem: https://codeforces.com/contest/1543/problem/A
# Submission: https://codeforces.com/contest/1543/submission/361600328
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:33

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        if(a==b)
            cout << 0 << " " << 0 << '\n';
        else
        {
            long long g = abs(a-b);
            long long m = min(a%g,g-a%g);
            cout << g << " " << m << '\n';
        }
    }
}