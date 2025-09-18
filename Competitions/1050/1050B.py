t=int(input())

for _ in range(t):
    n,m,x,y=map(int,input().split())
    hor=list(map(int,input().split()))
    ver=list(map(int,input().split()))
    print(len(hor)+len(ver))
