# Problem: https://codeforces.com/contest/766/problem/A
# Submission: https://codeforces.com/contest/766/submission/347931545
# Language: Python 3
# Solved at: 2025-11-29 23:08:16

a=input()
b=input()


if a==b:
    print(-1)
else:
    alen=len(a)
    blen=len(b)
    maxlen=max(alen,blen)
    print(maxlen)