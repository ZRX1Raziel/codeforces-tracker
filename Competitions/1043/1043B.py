import sys

t=int(input())

for _ in range(t):
    n = int(input())
    candidates=[]
    k=len(str(n))

    for i in range(1,k):
        if len(str((10**i)+1))>k:
            break
        if n%(10**i+1)==0:
            candidates.append(n//(10**i+1))

    candidates.sort()
    if len(candidates)==0:
        print(0)
    else:
        print(len(candidates))
        print(*candidates)
      
       

