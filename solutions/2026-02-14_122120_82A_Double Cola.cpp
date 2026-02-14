# Problem: https://codeforces.com/contest/82/problem/A
# Submission: https://codeforces.com/contest/82/submission/361077238
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:20

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> colas;

    
    for(long long i = 5; i <= 1e18; i *= 2)
    {
        colas.push_back(i);
    }

    long long sum = 0;
    long long temr = -1;   
    long long prevSum = 0; 

    
    for(int i = 0; i < colas.size(); i++)
    {
        if(sum + colas[i] >= n)
        {
            temr = colas[i];
            break;
        }
        sum += colas[i];
    }

    
    n -= sum;

    long long incr = temr / 5;
    string name;

    if(n <= incr)
        name = "Sheldon";
    else if(n <= 2 * incr)
        name = "Leonard";
    else if(n <= 3 * incr)
        name = "Penny";
    else if(n <= 4 * incr)
        name = "Rajesh";
    else
        name = "Howard";

    cout << name << '\n';
}
