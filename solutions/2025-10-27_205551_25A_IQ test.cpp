# Problem: https://codeforces.com/contest/25/problem/A
# Submission: https://codeforces.com/contest/25/submission/345389115
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:55:51

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> numbers(n);
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    int number1=numbers[0];
    int number2=numbers[1];
    int number3=numbers[2];
    int index;
    if (number1%2==number2%2)
    {
        for(int k=2;k<n;k++)
        {
            if(numbers[k]%2!=number1%2)
            {
                index=k;
                break;
            }
        }
    }
    else if (number1%2==number3%2)
    {
        index=1;
    }
    else
    {
        index=0;
    }

    cout<<index+1<<'\n';

}