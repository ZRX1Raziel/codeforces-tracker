# Problem: https://codeforces.com/contest/467/problem/B
# Submission: https://codeforces.com/contest/467/submission/357800301
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:03:05

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> players(m+1);
    int count=0;
    vector<bitset<20>> bitofplayer;
    for(int i=0;i<m+1;i++)
    {
        cin>>players[i];
        
    }
    for(int q:players)
    {
        bitset<20> b(q);
        
        bitofplayer.push_back(b);
    }
    for(int i=0;i<m;i++)
    {
        int cnt=(bitofplayer[i]^bitofplayer[m]).count();
       
        
        if (cnt<=k)
        count+=1;
    }
    cout<<count<<'\n';
}