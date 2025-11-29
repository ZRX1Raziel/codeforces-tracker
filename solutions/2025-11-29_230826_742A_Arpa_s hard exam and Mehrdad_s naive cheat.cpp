# Problem: https://codeforces.com/contest/742/problem/A
# Submission: https://codeforces.com/contest/742/submission/348181083
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:26

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int number=n%4;
    if (n==0)
        cout<<1<<'\n';
    else if (number==1)
        cout<<8<<'\n';
    else if(number==2)
        cout<<4<<'\n';
    else if(number==3)
        cout<<2<<'\n';
    else if(number==0)
        cout<<6<<'\n';
}