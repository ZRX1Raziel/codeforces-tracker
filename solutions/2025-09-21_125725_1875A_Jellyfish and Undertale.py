# Problem: https://codeforces.com/contest/1875/problem/A
# Submission: https://codeforces.com/contest/1875/submission/339664028
# Language: Python 3
# Solved at: 2025-09-21 12:57:25

t=int(input())

for _ in range(t):
    a,b,n=map(int,input().split())
    tools=list(map(int,input().split()))
    time=b-1
    goodcount=0
    for tool in tools:
        if tool>=a:
            time+=a
            goodcount+=1
        else:
            time+=tool
    
    print(time-(goodcount-1))