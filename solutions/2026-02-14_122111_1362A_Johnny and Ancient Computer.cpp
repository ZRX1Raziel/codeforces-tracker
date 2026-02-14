# Problem: https://codeforces.com/contest/1362/problem/A
# Submission: https://codeforces.com/contest/1362/submission/360895926
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:11

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  a,b;
        cin>>a>>b;
        if(a==b)
        {
             cout<<0<<'\n';
             continue;
        }
        long long big=max(a,b);
        long long small=min(a,b);

        if(big%small !=0)
        {
            cout<<-1<<'\n';
            continue;
        }
        long long ratio=big/small;
        if((ratio&(ratio -1))!=0)
        {
            cout<<-1<<'\n';
            continue;
        }
        int ops=0;
        while(ratio>1)
        {
            if(ratio%8==0)
                ratio/=8;
            else if(ratio%4==0)
                ratio/=4;
            else    
                ratio/=2;
            ops+=1;

        }
        cout<<ops<<'\n';
           
        
    }
}