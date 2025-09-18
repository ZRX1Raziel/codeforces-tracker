#t= int(input())

#for _ in range(t):
xo,n=map(int,input().split())
final=0
for i in range(n):
        if i==0:
            final-=i+1
        elif i%2==0:
            final+=i
        else:
            final-=i

print(final)
