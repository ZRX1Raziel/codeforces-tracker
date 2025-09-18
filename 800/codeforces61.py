n = int(input())

cards= list(map(int,input().split()))

sreja=0
dima=0
i=0
k=n-1

while i<=k:
    sreja+=max(cards[i],cards[k])
    if cards[i]>cards[k]:
        i+=1
    else:
        k-=1

    if i>k:
        break
    
    dima+=max(cards[i],cards[k])
    if cards[i]>cards[k]:
        i+=1
    else:
        k-=1
    
    
 

print(f"{sreja} {dima}")