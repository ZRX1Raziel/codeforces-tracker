# Problem: https://codeforces.com/contest/139/problem/A
# Submission: https://codeforces.com/contest/139/submission/354583765
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:05

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(7);
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }

    int day = 0;
    while(true){
        n -= a[day];
        if(n <= 0){
            cout << day + 1;
            break;
        }
        day = (day + 1) % 7;
    }

    return 0;
}
