n= int(input())

arr=list(map(int,input().split()))

res = [0]*n

for i in range(n):
    receiver=arr[i]
    res[receiver-1]= i+1

print(*res)