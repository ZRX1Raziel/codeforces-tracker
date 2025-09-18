k= int(input())
months= list(map(int, input().split()))

months.sort(reverse=True)

minmonthsval=0
minmonths=0

if k ==0:
     print("0")
else:     
    for month in months:
        
            minmonthsval+=month
            minmonths+=1
            if minmonthsval>=k:
                print(minmonths)
                break

    if minmonthsval<k:
        print(-1)