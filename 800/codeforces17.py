n , k = map(int,input().split())

while k > 0:
    num=str(n)

    if num[len(num)-1] !='0':
        n-=1
        
    else:
        n//=10
    k-=1

print(n)

