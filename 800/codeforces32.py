n= input()
m= input()
new=""
for i in range(len(n)):
    if n[i]==m[i]:
        new+='0'
    else:
        new+='1'

print(new)