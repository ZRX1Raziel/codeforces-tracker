# Problem: https://codeforces.com/contest/1342/problem/A
# Submission: https://codeforces.com/contest/1342/submission/344919801
# Language: Python 3
# Solved at: 2025-10-27 20:55:16

t=int(input())

for _ in range(t):

    x,y=map(int,input().split())
    a,b=map(int,input().split())
    
    x,y=abs(x),abs(y)
    miner=min(x,y)
    major=max(x,y)

    if b<2*a:
        cost=b*miner +a *(major-miner)
    else:
        cost=a*(x+y)
    print(cost)
        