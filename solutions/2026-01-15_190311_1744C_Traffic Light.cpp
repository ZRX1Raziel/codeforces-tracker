# Problem: https://codeforces.com/contest/1744/problem/C
# Submission: https://codeforces.com/contest/1744/submission/357847868
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:03:11

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        string s;
        cin>>n>>c;
        cin>>s;
        s=s+s;
        int curr=0;
        int maxwait=0;
        int i=0;
        int q=s.length();
        int start=-1;
        int end=-1;
        while(i<q)
        {
            
            if(s[i]==c && start==-1)
                start=i;
            if(start!=-1 && s[i]=='g')
            {
                end=i;
                curr=end-start;
                start=-1;
            }
            maxwait=max(curr,maxwait);

            i+=1;
        }
        cout<<maxwait<<'\n';
    }
}