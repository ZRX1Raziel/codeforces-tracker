# Problem: https://codeforces.com/contest/1367/problem/A
# Submission: https://codeforces.com/contest/1367/submission/340517067
# Language: Python 3
# Solved at: 2025-10-03 21:54:14

t = int(input())
for _ in range(t):
    b = input().strip()
    a = b[0]
    # take every second character starting from index 1, step 2
    for i in range(1, len(b)-1, 2):
        a += b[i]
    a += b[-1]
    print(a)
