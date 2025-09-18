n=int(input())

littlex= set(map(int,input().split()[1:]))
littley= set(map(int,input().split()[1:]))

count=0

for i in range (1,n+1):
    if i in littlex or i in littley:
        count+=1

if count==n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")

