n,m =map(int,input().split())

prices= list(map(int,input().split()))

prices.sort()

maxprofit=0
profit=0
for i in range(m):
    if prices[i]<0:
        prices[i]=abs(prices[i])
    else:
        prices[i]=-prices[i]

    profit+=prices[i]

    maxprofit=max(profit,maxprofit)

print(maxprofit)