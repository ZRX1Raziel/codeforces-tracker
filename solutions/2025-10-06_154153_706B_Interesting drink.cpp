# Problem: https://codeforces.com/contest/706/problem/B
# Submission: https://codeforces.com/contest/706/submission/342193168
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-06 15:41:53

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> prices(n);
    for (int i=0;i<n;i++)
        cin>> prices[i];
    
    sort(prices.begin(),prices.end());

    int q;
    cin>>q;

    while (q--)
    {
        int m;
        cin>>m;
        int affordable=upper_bound(prices.begin(),prices.end(),m)-prices.begin();
        cout<< affordable<<'\n';
    }

}
