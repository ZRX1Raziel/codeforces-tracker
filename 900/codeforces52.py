n = int(input())

coins = list(map(int,input().split()))

coins.sort(reverse=True)

mincoins=0
mysum=0
twinsum=0

for i in range(n):
    mysum+=coins[i]
    mincoins+=1
    twinsum=sum(coins[i+1:])
    if mysum>twinsum:
        break

print(mincoins)

