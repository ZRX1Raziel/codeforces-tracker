# Problem: https://codeforces.com/contest/1195/problem/B
# Submission: https://codeforces.com/contest/1195/submission/347898839
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:11

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long long k;
    cin>>n>>k;
    long long y;
    long long eaten;
    long long sum=0;
    for(long long i=1;i<=n;i++)
    {
        sum=(i*(i+1))/2;
        y=sum-k;
        if((i+y)==n)
        {
            eaten=y;
            break;
        }
    }
    cout<<eaten<<'\n';
}