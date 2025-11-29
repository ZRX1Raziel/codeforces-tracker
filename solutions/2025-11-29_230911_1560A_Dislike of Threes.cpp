# Problem: https://codeforces.com/contest/1560/problem/A
# Submission: https://codeforces.com/contest/1560/submission/350231790
# Language: C++20 (GCC 13-64)
# Solved at: 2025-11-29 23:09:11

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> dislike;
    for (int i = 1; i < 4000; i++) {
        string str = to_string(i);
        if (i % 3 != 0 && str.back() != '3') {
            dislike.push_back(i);
        }
    }

    while (t--) {
        int k;
        cin >> k;
        cout << dislike[k - 1] << '\n';
    }
}
