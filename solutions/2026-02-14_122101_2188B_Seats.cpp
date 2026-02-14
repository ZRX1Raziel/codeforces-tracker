# Problem: https://codeforces.com/contest/2188/problem/B
# Submission: https://codeforces.com/contest/2188/submission/360694698
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:01

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s='1'+s+'1';
        int ans=0;
        for(int i=1,l=0;i<=n;++i)
        {
            if(s[i]=='0')
            {
                if(s[i-1]=='1')
                {
                    l=i;
                }
                if(s[i+1]=='1')
                {
                    int c=(l==1) +(i==n);
                    ans+=(i-l+1+c)/3;
                }
            }
            else
                {
                    ++ans;
                }
            
        }
        cout<<ans<<'\n';


        
    }
}
