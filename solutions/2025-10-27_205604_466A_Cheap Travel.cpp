# Problem: https://codeforces.com/contest/466/problem/A
# Submission: https://codeforces.com/contest/466/submission/345794102
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:56:04

#include <iostream>
using namespace std;

int main() 
{
    int n;
    int m;
    int a;
    int b;
    int mincost;
    cin>>n>>m>>a>>b;
    if(b/m>=a)
    {
        mincost=n*a;
    }
    else
    {
        int mrides=n/m;
        int arides=n%m;
        mincost=min((mrides*b)+(arides*a),(mrides+1)*b);
    }
    cout<<mincost<<'\n';
}