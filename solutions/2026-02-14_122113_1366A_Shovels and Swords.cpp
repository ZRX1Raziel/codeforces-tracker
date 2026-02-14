# Problem: https://codeforces.com/contest/1366/problem/A
# Submission: https://codeforces.com/contest/1366/submission/360989891
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:13

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int count=0;
        count=min((a+b)/3,min(a,b));
        cout<<count<<'\n';
    }
}