# Problem: https://codeforces.com/contest/1559/problem/A
# Submission: https://codeforces.com/contest/1559/submission/339476081
# Language: Python 3
# Solved at: 2025-09-21 12:57:20

t=int(input())

for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    miner=arr[0]
    for i in range(1,n):
        miner =  miner&arr[i]
    print(miner)