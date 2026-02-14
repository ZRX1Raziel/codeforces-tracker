# Problem: https://codeforces.com/contest/1999/problem/D
# Submission: https://codeforces.com/contest/1999/submission/361046908
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:18

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s;
        cin>>t;
        int countq=0;
        int i=0;int j=0;
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j] || s[i]=='?')
            {
                if(s[i]=='?')
                    s[i]=t[j];
                j++;
            }
            i++;
        }
        if(j==t.length())
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='?')
                    s[i]='a';
            }
            cout<<"YES"<<'\n'<<s<<'\n';
        }
            
        else
            cout<<"NO"<<'\n';
    }
}