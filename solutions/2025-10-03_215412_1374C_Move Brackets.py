# Problem: https://codeforces.com/contest/1374/problem/C
# Submission: https://codeforces.com/contest/1374/submission/340214816
# Language: Python 3
# Solved at: 2025-10-03 21:54:12

t=int(input())

for _ in range(t):

    n=int(input())
    s=input()
    lower=0
    lowest=0

    for i in range(n):
        if s[i]==')':
            lower-=1
        else:
            lower+=1
        
        lowest=min(lower,lowest)

    print(abs(lowest))


