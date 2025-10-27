# Problem: https://codeforces.com/contest/1352/problem/C
# Submission: https://codeforces.com/contest/1352/submission/345996552
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:56:21

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        long long k;
        long long number;
        cin>>n>>k;
        long long intermediate=(k-1)/(n-1);
        number=k+intermediate;
        cout<<number<<'\n';
    }
}