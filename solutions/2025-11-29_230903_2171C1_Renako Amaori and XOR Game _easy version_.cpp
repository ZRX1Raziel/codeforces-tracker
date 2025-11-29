# Problem: https://codeforces.com/contest/2171/problem/C1
# Submission: https://codeforces.com/contest/2171/submission/349942400
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:03

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
        vector<int>a(n+1);
        vector<int>b(n+1);
        int counta=0;
        int countb=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            counta+=1;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
            if(b[i]==1)
            countb+=1;
            
        }

        for(int i=1;i<=n;i++)
        {
            if(a[i]==b[i])
                continue;
            else
            {
                if(i%2!=0)
                {
                    if(counta%2!=0 && a[i]==1)
                        continue;
                    else if(counta%2!=0 &&a[i]==0)
                        continue;
                    else if(counta%2==0 &&a[i]==0)
                    {
                        swap(a[i],b[i]);
                        counta+=1;
                        countb-=1;
                    }
                    else if(counta%2==0 &&a[i]==1)
                    {
                        swap(a[i],b[i]);
                        counta-=1;
                        countb+=1;
                    }
                    
                }
                else
                {
                    if(countb%2!=0 && b[i]==1)
                        continue;
                    else if(countb%2!=0 &&b[i]==0)
                        continue;
                    else if(countb%2==0 &&b[i]==0)
                    {
                        swap(a[i],b[i]);
                        countb+=1;
                        counta-=1;
                    }
                    else if(countb%2==0 &&b[i]==1)
                    {
                        swap(a[i],b[i]);
                        countb-=1;
                        counta+=1;
                    }
                }
            }
        } 
        int countascore=0;
        int countbscore=0;
        if (counta%2==0)
            countascore=0;
        else
            countascore=1;
        if (countb%2==0)
            countbscore=0;
        else
            countbscore=1;

        if(countascore>countbscore)
            cout<<"Ajisai"<<'\n';
        else if (countascore==countbscore)
            cout<<"Tie"<<'\n';
        else
            cout<<"Mai"<<"\n";
    }
}