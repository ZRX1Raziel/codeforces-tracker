# Problem: https://codeforces.com/contest/2197/problem/B
# Submission: https://codeforces.com/contest/2197/submission/362680573
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:55

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> p(n), a(n), pos(n+1);

        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            pos[p[i]] = i; // store index of each value
        }

        for(int i=0;i<n;i++)
            cin>>a[i];

        bool ok = true;

        for(int i=1;i<n;i++)
        {
            if(pos[a[i]] < pos[a[i-1]])
            {
                ok = false;
                break;
            }
        }

        cout<<(ok?"YES\n":"NO\n");
    }
}
