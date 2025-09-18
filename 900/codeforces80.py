t=int(input())

for _ in range(t):
    a,b,c,d=map(int,input().split())
    minab=min(a,b)
    maxab=max(a,b)

    c_between=(minab<c<maxab)
    d_between=(minab<d<maxab)

    if c_between != d_between:
        print("YES")
    else:
        print("NO")