# Problem: https://codeforces.com/contest/1840/problem/C
# Submission: https://codeforces.com/contest/1840/submission/349839127
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:58

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,k,q;
        cin>>n>>k>>q;
        vector<long long> temperature(n);
        for(int i=0;i<n;i++)
        {
            cin>>temperature[i];
        }
        long long run=0;
        long long ans=0;

        for(int i=0;i<n;i++)
        {
            if(temperature[i]<=q)
            {
                run+=1;
                if (run>=k)
                {
                    ans+= (run-k+1);
                }
            }
            else    
                run=0;
        }

        cout<<ans<<'\n';
        
        


    }
}