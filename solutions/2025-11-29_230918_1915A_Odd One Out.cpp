# Problem: https://codeforces.com/contest/1915/problem/A
# Submission: https://codeforces.com/contest/1915/submission/350650385
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:18

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
        if (a==b and a!=c )
            cout<<c<<'\n';
        else if (a!=b and a==c)
            cout<<b<<'\n';
        else if (a!=b and b==c)
            cout<<a<<'\n';
    }
}
