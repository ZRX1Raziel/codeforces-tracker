n =int(input("Enter the number of mags"))
s=""
for _ in range(n):
    a=input()
    s+=a

print(s)
noofgroup=1
for i in range(len(s)-1):
    if  s[i]=='0'and s[i+1]=='0':
        noofgroup+=1
    elif  s[i]=='1'and s[i+1]=='1':
        noofgroup+=1
    

print(noofgroup)

