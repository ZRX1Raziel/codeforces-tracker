t = int(input())

for _ in range(t):

    n=int(input())
    nums=list(map(int,input().split()))
    q=[]
    for num in nums:
        q.append((n+1)-num)

    print(*q)
