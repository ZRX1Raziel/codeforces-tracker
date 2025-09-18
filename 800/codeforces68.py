t = int(input())

for _ in range(t):

    a,b=input().split()
    
    a1=b[0]+a[1:]
    b1=a[0]+b[1:]

    print(a1+" "+b1)
    