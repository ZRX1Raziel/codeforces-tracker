n,k = map(int,input().split())

arr= list(map(int ,input().split()))

q=arr[k-1]

count=0
for i in range(n):
    if arr[i]>=q and arr[i]>0:
        count+=1

print(count)


