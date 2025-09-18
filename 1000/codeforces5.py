n=int(input())

lucky_nos=[4,7,44,47,74,77,444,447,474,477,744,747,774,777]

count=0
for no in lucky_nos:
    if n%no==0:
        print("YES")
        count+=1
        break

if count==0:
    print("NO")
