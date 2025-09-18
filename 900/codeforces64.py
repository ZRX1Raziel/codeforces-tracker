n= int(input())




for _ in range(n):
    
    t= int(input())
    if t<2020:
        print("NO")
    else:
        found =False
        for x in range(t//2020+1):
            if (t- 2020*x)%2021==0:
                found=True
                break

        print("YES" if found==True else "NO")
    
