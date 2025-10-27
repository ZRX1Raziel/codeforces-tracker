# Problem: https://codeforces.com/contest/4/problem/C
# Submission: https://codeforces.com/contest/4/submission/345189121
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:55:33

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


