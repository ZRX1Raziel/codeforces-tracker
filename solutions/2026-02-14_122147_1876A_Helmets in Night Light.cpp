# Problem: https://codeforces.com/contest/1876/problem/A
# Submission: https://codeforces.com/contest/1876/submission/362324290
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:47

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;

        vector<int> announcement(n+1);
        vector<int> cost(n+1);

        for (int i = 0; i < n; i++) cin >> announcement[i];
        for (int i = 0; i < n; i++) cin >> cost[i];

        vector<pair<int,int>> annoucecost;

        for (int i = 0; i < n; i++)
        {
            annoucecost.push_back({announcement[i], cost[i]});
        }

        annoucecost.push_back({0, p});

        sort(annoucecost.begin(), annoucecost.end(),
             [](auto &a, auto &b) { return a.second < b.second; });

        long long mincost = p;   // FIX 1: long long
        int i = 0;
        n -= 1;

        while (n > 0 && i < annoucecost.size())   // FIX 2
        {
            if (annoucecost[i].first == 0)
            {
                mincost += 1LL * p * n;
                break;
            }

            long long take = min((long long)n, (long long)annoucecost[i].first);
            mincost += take * annoucecost[i].second;
            n -= take;
            i++;
        }

        cout << mincost << '\n';
    }
}
