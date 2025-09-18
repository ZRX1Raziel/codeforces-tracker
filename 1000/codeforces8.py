s,n =map(int,input().split())
x=[0]*n
y=[0]*n

for i in range(n):
    x[i],y[i]=map(int,input().split())

combined=list(zip(x,y))
combined.sort()
x1,y1=zip(*combined)
strength=s
flag=1
for i in range(n):
    if strength>x1[i]:
        strength+=y1[i]
    else:
        flag=0
        break

if flag==1:
    print("YES")
else:
    print("NO")

