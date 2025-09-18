t=int(input())

for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    even=[]
    odd=[]
    maximum=0
    for i in range(n):
        if arr[i]%2==0:
            even.append(arr[i])
        else:
            odd.append(arr[i])
    odd.sort()
    if len(odd)==0:
        print(0)
        continue
    else:
        maximum+=sum(even)
        newsum=0
        if len(odd)%2:
            
            for i in range(len(odd)//2):
                newsum+=odd[i]
            maximum+=sum(odd)-newsum
        else:
            for i in range(len(odd)//2):
                newsum+=odd[i]
            maximum+=sum(odd)-newsum
        
        
        print(maximum)
