n = int(input())

arr = list(map(int, input().split()))

longest=1
length=1
l=r=0


for i in range(1,n):
        if arr[r]<=arr[i]:
            r+=1
            length=r-l+1
        else:
            l=r=i
            length=1
        
        longest=max(length,longest)

print(longest)