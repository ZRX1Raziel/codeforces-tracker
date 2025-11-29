# Problem: https://codeforces.com/contest/2171/problem/A
# Submission: https://codeforces.com/contest/2171/submission/349875665
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:01

#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int answer=0;
        if( n%2!=0)
            cout<<0<<'\n';
        else
        {
            answer= (n/4)+1;
            cout<<answer<<'\n';
        }

    }
}