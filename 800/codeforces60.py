t = int(input())

for _ in range(t):
    count=0
    arr=list(map(int,input().split()))
    temp=arr[0]
    arr.sort()
    if temp in arr:
        idx= arr.index(temp)
        print(3-idx)




    