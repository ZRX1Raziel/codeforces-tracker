n= int(input())

for _ in range(n):
    arr = list(map(int,input().split()))
    arr.sort()
    if arr[0]+arr[1]==arr[2]:
        print("YES")
    else:
        print("NO")

