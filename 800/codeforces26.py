n = int(input())

roomcount=0

for _ in range(n):
    a,b= map(int,input().split())
    if b-a>=2:
        roomcount+=1
    



    

print(roomcount)