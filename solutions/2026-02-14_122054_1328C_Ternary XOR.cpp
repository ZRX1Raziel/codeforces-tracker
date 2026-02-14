# Problem: https://codeforces.com/contest/1328/problem/C
# Submission: https://codeforces.com/contest/1328/submission/360475963
# Language: C++20 (GCC 13-64)
# Solved at: 2026-02-14 12:20:54

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;           
        cin >> s;

        string xer = "";    
        string yer = "";

        for(int i = 0; i < s.length(); i++)   
        {
            if(s[i] == '2')
            {
                xer.push_back('1');
                yer.push_back('1');
            }
            else if(s[i] == '1')
            {
                xer.push_back('1');
                yer.push_back('0');

                for(int j = i + 1; j < s.length(); j++)
                {
                    xer.push_back('0');
                    yer.push_back(s[j]);
                }
                break;
            }
            else if(s[i] == '0')
            {
                xer.push_back('0');
                yer.push_back('0');
            }
        }

        cout << xer << '\n' << yer << '\n';
    }
}
