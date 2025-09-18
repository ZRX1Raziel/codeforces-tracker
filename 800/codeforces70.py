t=int(input())

for _ in range(t):
    s=input()
    if s=='abc':
        print("YES")
    else:
        if s[0]=='c'and s[2]=='b':
            print("NO")
        
        elif s[1]=='c' and s[2]=='b':
            print("YES")
        elif s[1]=='c' and s[0]=='b':
            print("NO")
        else:
            print("YES")
            
