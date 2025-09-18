s =input()
upperchar=0
lowerchar=0
for char in s:
    if char.islower():
        lowerchar+=1
    else:
        upperchar+=1

if upperchar == lowerchar:
    s=s.lower()
elif lowerchar > upperchar:
    s=s.lower()
else:
    s=s.upper()

print(s)