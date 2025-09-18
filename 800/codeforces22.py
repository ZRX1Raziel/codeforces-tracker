n= int(input())

exit=[]
enter=[]

for _ in range(n):
    a,b= map(int,input().split())
    exit.append(a)
    enter.append(b)

mincapacity=0
capacity=0
for i in range(n):

    if i==0:
        capacity+=enter[i]
    else:
        capacity+=enter[i]-exit[i]

    mincapacity=max(capacity,mincapacity)


print(mincapacity)
