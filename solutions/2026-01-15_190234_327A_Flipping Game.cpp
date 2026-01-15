# Problem: https://codeforces.com/contest/327/problem/A
# Submission: https://codeforces.com/contest/327/submission/356953306
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:34

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int ones = 0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]==1)
            ones+=1;
    }
    int best_sum=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        int val=(a[i]==0 ? 1 : -1);
        curr_sum=max(val,curr_sum+val);
        best_sum=max(best_sum,curr_sum);
            
        
    }
    cout<<ones+best_sum<<'\n';

}
