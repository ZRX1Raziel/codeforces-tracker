# Problem: https://codeforces.com/contest/1343/problem/C
# Submission: https://codeforces.com/contest/1343/submission/357960142
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:03:17

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
        vector<int> numbers(n);
        for(int i=0;i<n;i++)
        {
            cin>>numbers[i];
        }
        int posnum;
        int negnum;
        vector<int> sequence;
        if(numbers[0]<0)
        {
                negnum=numbers[0];
                sequence.push_back(negnum);
        }
                
        else
        {
            posnum=numbers[0];
            sequence.push_back(posnum);
        }
               
        
        
        
        for(int i=1;i<n;i++)
        {
            if(numbers[i]<0)
            {
                if(sequence[sequence.size()-1]<0 && numbers[i]>sequence[sequence.size()-1])
                    sequence[sequence.size()-1]=numbers[i];
                else if(sequence[sequence.size()-1]>0)
                    sequence.push_back(numbers[i]);
                
            }
            else
            {
                if(sequence[sequence.size()-1]>0 && numbers[i]>sequence[sequence.size()-1])
                    sequence[sequence.size()-1]=numbers[i];
                else if(sequence[sequence.size()-1]<0)
                    sequence.push_back(numbers[i]);
            }
        }
        
        long long  summer=accumulate(sequence.begin(),sequence.end(),0LL);
        cout<<summer<<'\n';
        

        

    }
}