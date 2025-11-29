# Problem: https://codeforces.com/contest/2171/problem/B
# Submission: https://codeforces.com/contest/2171/submission/349961329
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:06

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
        vector<int> arr(n+1);
        vector<int> b(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int mimum_difference=0;
        if(arr[0]==-1 && arr[n-1]!=-1)
        
            arr[0]=arr[n-1];
        else if(arr[n-1]==-1 && arr[0]!=-1)
            arr[n-1]=arr[0];
        else if(arr[n-1]==-1 && arr[0]==-1)
            arr[n-1]=arr[0]=0;
        else
             mimum_difference=abs(arr[n-1]-arr[0]);

        cout<<mimum_difference<<'\n';

        for(int i=0;i<n;i++)
        {
            if(arr[i]==-1)
                arr[i]=0;
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        
        

        


    }
}