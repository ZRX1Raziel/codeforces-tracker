# Problem: https://codeforces.com/contest/227/problem/B
# Submission: https://codeforces.com/contest/227/submission/361148269
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:23

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> numbers(n+1);
    for(int i=1;i<=n;i++) cin>>numbers[i];
    int m;
    cin>>m;
    vector<int> queries(m);
    for(int i=0;i<m;i++) cin>>queries[i];

    unordered_map<int,int> comparisonsltr;
    unordered_map<int,int> comparisonsrtl;
    long long vasya=0;
    long long petya=0;
    for(int i=1;i<=n;i++)
    {
        if(comparisonsltr.find(numbers[i])== comparisonsltr.end())
        {
                
                comparisonsltr[numbers[i]]=i;
                
        }
       
    }
    for(int i=n;i>=1;i--)
    {
        if(comparisonsrtl.find(numbers[i])== comparisonsrtl.end())
        {
            comparisonsrtl[numbers[i]]=i;
            
        }
    }
    for(int i=0;i<m;i++)
    {
        int q=queries[i];
        auto it=comparisonsltr.find(q);
        if(it !=comparisonsltr.end())
        {
            vasya+=it->second;
        }
        auto ti=comparisonsrtl.find(q);
        if(ti !=comparisonsrtl.end())
        {
            petya+=(n-ti->second+1);
        }
        
    }


    cout<<vasya<<" "<<petya<<'\n';

}