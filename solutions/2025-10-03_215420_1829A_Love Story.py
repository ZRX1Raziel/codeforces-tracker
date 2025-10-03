# Problem: https://codeforces.com/contest/1829/problem/A
# Submission: https://codeforces.com/contest/1829/submission/340931641
# Language: Python 3
# Solved at: 2025-10-03 21:54:20

t=int(input())

for _ in range(t):
    s=input()
    st='codeforces'
    count=0
    for i in range(len(s)):
        if s[i]!=st[i]:
            count+=1

    print(count)