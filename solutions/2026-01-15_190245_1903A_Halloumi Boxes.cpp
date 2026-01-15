# Problem: https://codeforces.com/contest/1903/problem/A
# Submission: https://codeforces.com/contest/1903/submission/357363265
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:45

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> numbers(n);
        for(int i=0;i<n;i++)
            cin>>numbers[i];
        if(k<2)
        {
            vector<int> sortednums= numbers;
            sort(numbers.begin(),numbers.end());
            if(sortednums==numbers)
                cout<<"YES"<<'\n';
            else
            cout<<"NO"<<'\n';
        }
            
        else
            cout<<"YES"<<'\n';
    }
}