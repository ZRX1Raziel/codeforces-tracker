t= int(input())

for _ in range(t):

    n,k = map(int, input().split())

    probs = list(map(int, input().split()))

    probs.sort()

    max_len=1
    current_len=1

    for j in range(1,n):

        if probs[j]-probs[j-1]<=k:
            current_len+=1
        else:
            current_len=1
        
        max_len=max(max_len,current_len)


    minrem=n-max_len

    print(minrem)


         

