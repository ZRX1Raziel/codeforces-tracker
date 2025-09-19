# Problem: https://codeforces.com/contest/567/problem/A
# Submission: https://codeforces.com/contest/567/submission/339426881
# Language: Python 3
# Solved at: 2025-09-20 00:21:17

n=int(input())
dist=list(map(int,input().split()))
miner=0
maxer=0
for i in range(0,n):
    if i==0:
        miner=(dist[1]-dist[0])
        maxer=(dist[-1]-dist[0])
    elif i==n-1:
        miner=(dist[-1]-dist[-2])
        maxer=(dist[-1]-dist[0])
    else:
        miner=min((dist[i+1]-dist[i]),(dist[i]-dist[i-1]))
        maxer=max((dist[-1]-dist[i]),(dist[i]-dist[0]))
    print(miner, maxer)

