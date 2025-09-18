n =int(input())

a=[]
b=[]

for _ in range(n):
    c,d= map(int,input().split())
    a.append(c)
    b.append(d)



for i in range(n):
    remainder=a[i]%b[i]
    if remainder==0:
        print("0")
    else:
        print(b[i]-remainder)

