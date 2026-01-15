# Problem: https://codeforces.com/contest/433/problem/B
# Submission: https://codeforces.com/contest/433/submission/356668981
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:28

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> v(n), pref(n + 1, 0), prefSorted(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    // Sort copy of array
    vector<long long> sortedV = v;
    sort(sortedV.begin(), sortedV.end());

    for (int i = 0; i < n; i++) {
        prefSorted[i + 1] = prefSorted[i] + sortedV[i];
    }

    int m;
    cin >> m;

    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            // Original array range sum
            cout << pref[r] - pref[l - 1] << '\n';
        } else {
            // Sorted array range sum
            cout << prefSorted[r] - prefSorted[l - 1] << '\n';
        }
    }

    return 0;
}
