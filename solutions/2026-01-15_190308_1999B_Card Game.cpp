# Problem: https://codeforces.com/contest/1999/problem/B
# Submission: https://codeforces.com/contest/1999/submission/357818320
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:03:08

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
       
        int wins = 0;
        int sa[2] = {a1, a2};
        int sb[2] = {b1, b2};

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                int s = 0, b = 0;

                if(sa[i] > sb[j]) s++;
                else if(sa[i] < sb[j]) b++;

                if(sa[1-i] > sb[1-j]) s++;
                else if(sa[1-i] < sb[1-j]) b++;

                if(s > b) wins++;
            }
        }
        cout<<wins<<'\n';
        
    }
}