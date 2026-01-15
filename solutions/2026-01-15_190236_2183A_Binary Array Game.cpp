# Problem: https://codeforces.com/contest/2183/problem/A
# Submission: https://codeforces.com/contest/2183/submission/356957768
# Language: C++20 (GCC 13-64)
# Solved at: 2026-01-15 19:02:36

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int count0=0;
        int count1=0;
        for(int i = 0; i < n; i++) 
        {
            cin>>a[i];
        }
        if(a[0]==1)
            cout<<"ALICE"<<'\n';
        else if(a[n-1]==1)
            cout<<"ALICE"<<'\n';
        else
            cout<<"BOB"<<'\n';
        
        
        
    }
}
