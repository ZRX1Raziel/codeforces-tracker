k ,n ,w = map(int , input().split())

i=1
cost=0
while w >0:
    cost+=i*k
    w-=1
    i+=1
borrow=max(0,cost-n)

print(borrow)