n , h = map(int,input().split())

arr= list(map(int, input().split()))

count=0

for i in range(n):
    if arr[i]>h:
        count+=2
    else:
        count+=1

print(count)