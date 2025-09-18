s1 =input()
s2 = input()
s3= input()


names={}
pile={}

for char in s1:
    if char not in names:
        names[char]=1
    else:
        names[char]+=1

for char1 in s2:
    if char1 not in names:
        names[char1]=1
    else:
        names[char1]+=1

for char2 in s3:
    if char2 not in pile:
        pile[char2]=1
    else:
        pile[char2]+=1




if names==pile:
    print("YES")
else:
    print("NO")