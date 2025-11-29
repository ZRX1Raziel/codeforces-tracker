# Problem: https://codeforces.com/contest/2065/problem/B
# Submission: https://codeforces.com/contest/2065/submission/349594485
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:51

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
        int conti=0;
        for(int i=1;i<s.length();i++)
        {
            if (s[i]==s[i-1])
            {
                conti+=1;
                break;
            }
        }

        if(conti!=0)
            cout<<1<<'\n';
        else    
            cout<<s.length()<<'\n';
    }
}