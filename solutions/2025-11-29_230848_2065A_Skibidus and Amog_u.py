# Problem: https://codeforces.com/contest/2065/problem/A
# Submission: https://codeforces.com/contest/2065/submission/349592851
# Language: Python 3
# Solved at: 2025-11-29 23:08:48

t=int(input())


for _ in range(t):
    w=input()

    if len(w)==2:
        print("i")
    else:
        newstr=w[:len(w)-2]+"i"
        print(newstr)