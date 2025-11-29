# Problem: https://codeforces.com/contest/1760/problem/A
# Submission: https://codeforces.com/contest/1760/submission/350100379
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:08

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int maximum=max(a,max(b,c));
        int minimum=min(a,min(b,c));
        if (a!=maximum && a!=minimum)
            cout<<a<<'\n';
        else if (b!=maximum && b!=minimum)
            cout<<b<<'\n';
        else if (c!=maximum && c!=minimum)
            cout<<c<<'\n';
        
    }
}