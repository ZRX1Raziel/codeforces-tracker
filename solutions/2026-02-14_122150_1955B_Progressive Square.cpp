# Problem: https://codeforces.com/contest/1955/problem/B
# Submission: https://codeforces.com/contest/1955/submission/362410724
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:50

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        int l=n*n;
        vector<int> elements;
        for(int i=0;i<l;i++)
        {
            int x;
            cin>>x;
            elements.push_back(x);
        }
        sort(elements.begin(),elements.end());
        vector<int> mainarray;
        int num=elements[0];
        int row=elements[0];
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                
                mainarray.push_back(num);    
               
                num+=d;
                    
                   
                    
                

                    
                    
                
            }
            row+=c;
            num=row;
            
            
        }
        sort(mainarray.begin(),mainarray.end());
        if(mainarray==elements)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
        
    }
}