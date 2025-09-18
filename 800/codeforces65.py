t = int(input())

for _ in range(t):

    n=int(input())
    arr=list(map(int, input().split()))
    hashed={}
    for i,val in enumerate(arr):
        if val not in hashed:
            hashed[val]=[]
        hashed[val].append(i)

    for key,indices in hashed.items():
        if len(indices)==1:
            print(indices[0]+1)    