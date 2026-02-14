# Problem: https://codeforces.com/contest/1850/problem/E
# Submission: https://codeforces.com/contest/1850/submission/360864660
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:06

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, c;
        cin >> n >> c;

        vector<long long> sides(n);

        for(int i=0;i<n;i++) cin >> sides[i];

        long long summer = 0;
        long long a = n;
        long long b = 0;

        for(int i=0;i<n;i++)
        {
            summer += sides[i]*sides[i];
            b += sides[i]*2;
        }

        long long d = c - summer;

        double D = (double)b*b - 4.0*a*-d;

        if(D < 0)
        {
            cout << "0\n";
            continue;
        }

        double ans1 = (-b + sqrt(D)) / (2.0*a);
        double ans2 = (-b - sqrt(D)) / (2.0*a);

        double root = (ans1 > 0) ? ans1 : ans2;

        cout << (long long)round(root/2.0) << '\n';
    }
}
