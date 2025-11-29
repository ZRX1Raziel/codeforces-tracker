# Problem: https://codeforces.com/contest/703/problem/A
# Submission: https://codeforces.com/contest/703/submission/349758221
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:56

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> m(n);
    vector<int> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>c[i];
    }
    int mcount=0;
    int ccount=0;

    for(int i=0;i<n;i++)
    {
        if (m[i]>c[i])
            mcount+=1;
        else if (m[i]<c[i])
            ccount+=1;
    }
    if (mcount>ccount)
        cout<<"Mishka"<<'\n';
    else if (mcount<ccount)
        cout<<"Chris"<<'\n';
    else    
        cout<<"Friendship is magic!^^"<<'\n';
}