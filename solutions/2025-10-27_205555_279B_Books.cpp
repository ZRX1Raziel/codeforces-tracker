# Problem: https://codeforces.com/contest/279/problem/B
# Submission: https://codeforces.com/contest/279/submission/345455716
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:55:55

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t;
    cin>>n>>t;
    vector<int> books(n);
    for(int i =0;i<n;i++)
    {
        cin>>books[i];
    }
    int maxbooks=0;
    int sum=0;
    int left=0;
    for(int right=0;right<n;right++)
    {
        sum+=books[right];
        while(sum>t)
        {
            sum-=books[left];
            left++;
        }
        maxbooks=max(maxbooks,right-left+1);
    }
        
    
    cout<<maxbooks;

}