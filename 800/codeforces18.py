n= int(input())

num= str(n)
count=0
for no in num:
    if no=='4' or no=='7':
        count+=1

if count == 4 or count ==7:
    print("YES")
else:
    print("NO")