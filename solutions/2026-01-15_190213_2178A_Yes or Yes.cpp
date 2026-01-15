# Problem: https://codeforces.com/contest/2178/problem/A
# Submission: https://codeforces.com/contest/2178/submission/355344127
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:13

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ycount=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='Y')
                ycount+=1;
            
        }
        if(ycount>1)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
}