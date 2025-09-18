n = int(input())
s= input()

antonc=0
danikc=0

for char in s:
    if char=='A':
        antonc+=1
    else:
        danikc+=1


if antonc>danikc:
    print("Anton")
elif danikc>antonc:
    print("Danik")
else:
    print("Friendship")

