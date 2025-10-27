# Problem: https://codeforces.com/contest/1141/problem/A
# Submission: https://codeforces.com/contest/1141/submission/345248336
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:55:44

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    int m;
    cin>>n>>m;
    int count=0;
    if (m==n)
    {
        cout<<0;
        return 0;
    }
    else if (m%n!=0)
    {
        cout<<-1;
        return 0;
    }
    long long num=m/n;

    while(num%2==0)
    {
        num/=2;
        count+=1;
    }
    while(num%3==0)
    {
        num/=3;
        count+=1;
    }
    if(num !=1)
    {
        cout<<-1;
        return 0;
    }
    else
        cout<<count;

    
}