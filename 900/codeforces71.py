t = int(input())

for _ in range(t):
    n,k,x = map(int, input().split())

    minSum = k * (k+1)//2
    maxSum = k * (2 *n-k +1)//2
    if minSum<=x<=maxSum:
        print("YES")
    else:
        print("NO")