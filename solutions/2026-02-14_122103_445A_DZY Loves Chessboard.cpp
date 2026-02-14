# Problem: https://codeforces.com/contest/445/problem/A
# Submission: https://codeforces.com/contest/445/submission/360855292
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:03

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mat(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='.')
            {
                if((i+j)%2==0)
                    cout<<"W";
                else
                    cout<<"B";
            }
            else
            {
                cout<<"-";
            }
            
        }
        cout<<'\n';
    }
}