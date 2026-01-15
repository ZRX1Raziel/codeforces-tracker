# Problem: https://codeforces.com/contest/2179/problem/A
# Submission: https://codeforces.com/contest/2179/submission/355085975
# Language: Python 3
# Solved at: 2026-01-15 19:02:10

t = int(input())
for _ in range(t):
    k, x = [int(i) for i in input().split()]
    print(k*x+1)