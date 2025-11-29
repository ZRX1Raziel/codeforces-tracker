# Problem: https://codeforces.com/contest/1476/problem/A
# Submission: https://codeforces.com/contest/1476/submission/348382803
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:08:34

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        if(n==1)
            cout<<k<<'\n';
        else if (n==k)
            cout<<1<<'\n';
        else if(n>k)
        {
            if(n%k==0)
                cout<<1<<'\n';
            else
            {
                int quotient=(n/k)+1;
                int newk=quotient*k;
                int newquotient=newk/n;
                cout<<newquotient+1<<'\n';
            }
            
        }
        else if (n<k)
        {
            int remainder=k%n;
            int quotient=k/n;
            if(remainder==0)
                cout<<quotient<<'\n';
            else
                cout<<quotient+1<<'\n';
        }
    }
}