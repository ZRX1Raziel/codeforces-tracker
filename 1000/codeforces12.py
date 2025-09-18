n,t = map(int,input().split())
cells=list(map(int,input().split()))

pos=1

while pos<t:
    pos+=cells[pos-1]

if pos==t:
    print("YES")
else:
    print("NO")
