# Problem: https://codeforces.com/contest/2009/problem/C
# Submission: https://codeforces.com/contest/2009/submission/357734390
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:54

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long jumps=max(2*((x+k-1)/k)-1,2*((y+k-1)/k));
        cout<<jumps<<'\n';
    }
}