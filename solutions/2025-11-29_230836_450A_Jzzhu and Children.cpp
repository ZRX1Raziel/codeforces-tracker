# Problem: https://codeforces.com/contest/450/problem/A
# Submission: https://codeforces.com/contest/450/submission/348589814
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:36

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>>q;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push({x,i+1});

    }

    while(q.size()>1)
    {
        auto cur= q.front();
        q.pop();
        if(cur.first > m)
        {
            cur.first-=m;
            q.push(cur);
        }
    }
    cout<<q.front().second;


    
}