# Problem: https://codeforces.com/contest/1850/problem/A
# Submission: https://codeforces.com/contest/1850/submission/351251223
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:28

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
        
        if(a+b>=10)
            cout<<"YES"<<'\n';
        else if(a+c>=10)
            cout<<"YES"<<'\n';
        else if(b+c>=10)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
}