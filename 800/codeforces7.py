
arr= [list(map(int,input().split())) for _ in range(5)]
indi=0
indj=0
steps=0
for i in range (5):
    for j in range(5):
        if arr[i][j]==1:
            indi=i
            indj=j
if indi==2 and indj ==2:
    print ("0")

else:
    steps= abs(indi-2)+abs(indj-2)

    print(steps)

'''Much Better Solution using Math


if indi==2 and indj ==2:
    print ("0")

else:
    
    steps= abs(indi-2)+abs(indj-2)

    print(steps)



'''
