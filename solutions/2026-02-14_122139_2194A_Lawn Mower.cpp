# Problem: https://codeforces.com/contest/2194/problem/A
# Submission: https://codeforces.com/contest/2194/submission/362042983
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:39

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,w;
        cin>>n>>w;
        if(w==1)
        {
            cout<<0<<'\n';
        }
        else
        {
            long long inter=ceil(n/w);
            long long ans=n-inter;
            cout<<ans<<'\n';
        }
        

    }
}