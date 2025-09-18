n = int(input())

stringn = str(n)

if '2' in stringn or '3' in stringn or '5' in stringn or '6' in stringn or '7' in stringn or '8' in stringn or '9'in stringn or '0' in stringn:
    print("NO")
elif stringn[0]=='4':
    print("NO")
elif '444' in stringn:
    print("NO")
else:
    print("YES")
    
            
    