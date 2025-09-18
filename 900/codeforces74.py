t = int(input())

for _ in range(t):
    n,q = map(int, input().split())
    nums=list(map(int, input().split()))
    prearr=[0]
    presum=0
    for num in nums:
        prearr.append(prearr[-1]+num)
        presum+=num
    for _ in range(q):
        l,r,k=map(int,input().split())
        old_sum=prearr[r]-prearr[l-1]
        leg=r-l+1
        rep=leg*k
        new_sum=presum-old_sum+rep
        if new_sum%2 ==0:
            print("NO")
        else:
            print("YES")

