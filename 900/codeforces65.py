t= int(input())


for _ in range(t):
    n=int(input())
    for k in range(2,32):
        deno=pow(2,k)-1
        if n%deno==0:
            print(n//deno)
            break