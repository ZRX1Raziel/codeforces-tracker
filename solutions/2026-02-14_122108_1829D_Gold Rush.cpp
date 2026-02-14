# Problem: https://codeforces.com/contest/1829/problem/D
# Submission: https://codeforces.com/contest/1829/submission/360874969
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:08

#include <bits/stdc++.h>
using namespace std;


bool solve(long long  n,long long  m)
{
    if(n==m) return true;
    if(n<m) return false;
    if(n%3!=0) return false;

    return solve(n/3,m) || solve(2*(n/3),m);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,m;
        cin>>n>>m;
        if(solve(n,m))
        cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
        
    }
    
}

