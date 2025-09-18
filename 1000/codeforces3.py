n = int(input())
totx=0
toty=0
totz=0
for _ in range(n):
    x,y,z= map(int,input().split())
    totx+=x
    toty+=y
    totz+=z

if totx==0 and toty==0 and totz==0:
    print("YES")
else:
    print("NO")
    