# Problem: https://codeforces.com/contest/219/problem/A
# Submission: https://codeforces.com/contest/219/submission/362314475
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:21:44

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> freq;
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]]+=1;
    }
    bool possible= true;
    for( auto &it:freq)
    {
        if(it.second%k!=0)
        {
            possible=false;
            break;
        }
    }
    if(possible==false)
        cout<<-1<<'\n';
    else
    {
        string newstr="";
       
            for(auto&it:freq)
            {
                int cnt=it.second/k;
                newstr+=string(cnt,it.first);
            }
        string res="";
        for(int i=0;i<k;i++)
        {
            res+=newstr;
        }
            
        cout<<res<<'\n';
    }
}