t = int(input())

for _ in range(t):

    a,b,c = map(int, input().split())
    flag=0
    if (2*b -c )>0 and (2*b-c)%a ==0:
        flag=1
    elif (2*b-a)>0 and (2*b-a)%c ==0:
        flag=1
    elif (a+c)>0 and (a+c)%(2*b)==0:
        flag=1
    
    print("YES" if flag==1 else "NO")