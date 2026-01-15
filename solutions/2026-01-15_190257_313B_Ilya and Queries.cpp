# Problem: https://codeforces.com/contest/313/problem/B
# Submission: https://codeforces.com/contest/313/submission/357786678
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:57

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    //precomputing
    int n=s.length();
    vector<int>same(n,0);
    
    
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i])
            same[i]=1;
        else
            same[i]=0;
    }
    vector<int>summer(n,0);
    for(int i=1;i<same.size();i++)
    {
        summer[i]=same[i]+summer[i-1];
    }
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        //call for the answer 
        int answer=summer[r-1]-summer[l-1];
        cout<<answer<<'\n';
    }
}