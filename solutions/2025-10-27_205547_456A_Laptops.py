# Problem: https://codeforces.com/contest/456/problem/A
# Submission: https://codeforces.com/contest/456/submission/345329487
# Language: Python 3
# Solved at: 2025-10-27 20:55:47

n=int(input())
prices=[]
quality=[]
for _ in range(n):
    p,q=map(int,input().split())
    prices.append(p)
    quality.append(q)

    
combined=sorted(zip(prices,quality))

prices,quality=zip(*combined)

prices=list(prices)
quality=list(quality)
flag=0
for i in range(n-1):
    if quality[i]>quality[i+1]:
        flag=1
        print("Happy Alex")
        break

if flag==0:
    print("Poor Alex")

