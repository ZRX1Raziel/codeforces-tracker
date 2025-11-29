# Problem: https://codeforces.com/contest/758/problem/A
# Submission: https://codeforces.com/contest/758/submission/351076093
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:26

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> citizens(n);
    for(int i=0;i<n;i++)
    {
        cin>>citizens[i];
    }   
    int maxi=*max_element(citizens.begin(),citizens.end());
    
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if (citizens[i]<maxi)
            counter+=maxi-citizens[i];

    }
    cout<<counter<<'\n';
}