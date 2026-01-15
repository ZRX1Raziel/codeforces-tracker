# Problem: https://codeforces.com/contest/519/problem/B
# Submission: https://codeforces.com/contest/519/submission/357791411
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:03:02

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int x1=0,x2=0,x3=0;

    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        x1^=q;
    }
    for(int i=0;i<n-1;i++)
    {
        int a;
        cin>>a;
        x2^=a;
    }
    for(int i=0;i<n-2;i++)
    {
        int b;
        cin>>b;
        x3^=b;
    }
    int fix1,fix2;
    fix1=x1^x2;
    fix2=x2^x3;
    cout<<fix1<<'\n'<<fix2<<'\n';

}