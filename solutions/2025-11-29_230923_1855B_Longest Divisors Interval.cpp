# Problem: https://codeforces.com/contest/1855/problem/B
# Submission: https://codeforces.com/contest/1855/submission/350815545
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:23

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        long long n;
        cin>>n;
        long long x;
        if(n==1)
            cout<<1<<'\n';
        else
        {
            for(int i=1;i<=60;i++)
        {
            if(n%i!=0)
            {
                x=i;
                break;
            }
        }
        cout<<x-1<<'\n';
        }
        
    }
    
}