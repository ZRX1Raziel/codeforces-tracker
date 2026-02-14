# Problem: https://codeforces.com/contest/2188/problem/A
# Submission: https://codeforces.com/contest/2188/submission/360544416
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:20:58

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> perm(n,0);
        if(n==2)
        {
            cout<<1<<" "<<2<<" "<<'\n';
        }
        else if(n==3)
        {
            cout<<2<<" "<<3<<" "<<1<<'\n';
        }
        else
        {
            if(n%2!=0)
            {
                    int half=(n/2)+1;
                    for(int i=0;i<n;i+=2)
                    {
                        
                        perm[i]=half;
                        
                        half+=1;
                    }
                    int sechaf=(n/2);
                    for(int i=1;i<n;i+=2)
                    {
                        perm[i]=sechaf;
                        
                            sechaf-=1;
                    }
            }
            else
            {
                    int half=n/2;
                    for(int i=0;i<n;i+=2)
                    {
                        
                        perm[i]=half;
                        half-=1;
                    }
                    int sechaf=(n/2)+1;
                    for(int i=1;i<n;i+=2)
                    {
                        perm[i]=sechaf;
                        sechaf+=1;
                    }
            }
                
            for(int i:perm)
            {
                cout<<i<<" ";
            }
            cout<<'\n';
            }
                
    }
}