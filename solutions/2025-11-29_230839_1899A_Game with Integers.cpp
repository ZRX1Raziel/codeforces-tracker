# Problem: https://codeforces.com/contest/1899/problem/A
# Submission: https://codeforces.com/contest/1899/submission/349112227
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:39

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if ((n-1)%3==0 || (n+1)%3==0)
            cout<<"First"<<'\n';
        else
            cout<<"Second"<<'\n';

    }
}