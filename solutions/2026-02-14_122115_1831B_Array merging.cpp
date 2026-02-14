# Problem: https://codeforces.com/contest/1831/problem/B
# Submission: https://codeforces.com/contest/1831/submission/361037732
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:15

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
        vector<int> ar(n);
        vector<int> br(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        for(int j=0;j<n;j++) cin>>br[j];

        vector<int> maxA(2*n+1,0), maxB(2*n+1,0);

        for(int i=0;i<n;)
        {
            int j=i;
            while(j<n && ar[j]==ar[i]) j++;
            int len=j-i;
            maxA[ar[i]]=max(maxA[ar[i]],len);
            i=j;
        }
        for(int i = 0; i < n; )
        {
            int j = i;
            while(j < n && br[j] == br[i]) j++;
            int len = j - i;
            maxB[br[i]] = max(maxB[br[i]], len);
            i = j;
        }
        int ans=1;
        for(int val=1;val<=2*n;val++)
        {
            ans=max(ans,maxA[val]+maxB[val]);
        }
        cout<<ans<<'\n';


    }
}