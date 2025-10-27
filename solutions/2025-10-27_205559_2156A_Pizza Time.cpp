# Problem: https://codeforces.com/contest/2156/problem/A
# Submission: https://codeforces.com/contest/2156/submission/345594980
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:55:59

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        long long pizza=0;
        
        
        while(n>2)
        {
             pizza+=n/3;
             n=n-(n/3)-(n/3);
             
        }
        cout<<pizza<<'\n';
    }
}