# Problem: https://codeforces.com/contest/1791/problem/D
# Submission: https://codeforces.com/contest/1791/submission/357942765
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:03:14

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<int> right(26,0) , left(26,0);
        for(char c:s)
        {
            right[c-'a']+=1;

        }
        int rightdistinct=0;
        for(int i=0;i<26;i++)
        {
            if(right[i]>0)
            rightdistinct+=1;
        }
        int leftdistinct=0;
        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            int ch=s[i]-'a';
            left[ch]+=1;
            if(left[ch]==1)
                leftdistinct+=1;
            
            right[ch]--;
            if(right[ch]==0)
                rightdistinct-=1;
            
            ans=max(ans,leftdistinct+rightdistinct);
        }

        cout<<ans<<'\n';
            

        
    }
}