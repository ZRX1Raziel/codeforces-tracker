n,m=map(int,input().split())

tasks=list(map(int,input().split()))

time=0
current=1
for i in range(m):
    if current<=tasks[i]:
        time+=tasks[i]-current
        current=tasks[i]
    else :
        time+=n-current+tasks[i]
        current=tasks[i]

    
print(time)
    