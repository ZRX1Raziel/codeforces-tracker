# Problem: https://codeforces.com/contest/2197/problem/A
# Submission: https://codeforces.com/contest/2197/submission/362464408
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:53

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int counter=0;

        for(long long i=n;i<=n+81;i++)
        {
            string s=to_string(i);
            int sum=0;
            for(int j=0;j<s.length();j++)
            {   
                sum += s[j]-'0';
            }
            if(i-sum==n)
                counter++;
        }
        cout<<counter<<'\n';
    }
}
