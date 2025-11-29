# Problem: https://codeforces.com/contest/474/problem/B
# Submission: https://codeforces.com/contest/474/submission/350697674
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:21

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    int ans;
    cin>>n;
    vector<int> piles(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>piles[i];
    } 
    int m;
    cin>>m;
    vector<int> worms(m+1);
    for(int i=1;i<=m;i++)
    {
        cin>>worms[i];
    }
    vector<int> labels(n+1);
    labels[0]=0;
    for(int i=1;i<=n;i++)
    {
        labels[i]=piles[i]+labels[i-1];
    }
    for (int i=1;i<=m;i++)
    {
        int q=worms[i];
        int low=1,high=n;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(labels[mid]>=q)
                high=mid;
            else
                low=mid+1;
        }
        cout<<low<<'\n';

    }
}


