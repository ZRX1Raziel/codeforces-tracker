n = int(input())

candy=[]

for _ in range(n):
    candy.append(int(input()))

for i in range(n):
    if 2>= candy[i]:
        print("0")
    elif candy[i]%2 ==0:
        print((candy[i]//2)-1)
    else:
        print(candy[i]//2)
