n = int(input())

performance=list(map(int,input().split()))

worst=performance[0]
best=performance[0]
amazing=0
for i in range(n):
    if performance[i] > best:
        best=performance[i]
        amazing+=1
    elif performance[i] < worst:
        worst=performance[i]
        amazing+=1
    
print(amazing)