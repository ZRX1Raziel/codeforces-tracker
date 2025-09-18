
t=int(input())
for _ in range(t):

    k,x=map(int,input().split())

    while k>0:
        #if x%2==0:
            x*=2
       
            k-=1
    print(x)