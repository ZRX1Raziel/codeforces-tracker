# Problem: https://codeforces.com/contest/1950/problem/A
# Submission: https://codeforces.com/contest/1950/submission/341542174
# Language: Python 3
# Solved at: 2025-10-03 21:54:26

t=int(input())

for _ in range(t):
    a,b,c=map(int,input().split())
    if a<b and b<c:
        print("STAIR")
    elif a<b and b>c:
        print("PEAK")
    else:
        print("NONE")