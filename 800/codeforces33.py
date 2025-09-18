n=int(input())

feelings=""

for i in range(1,n+1):
    if i%2==0:
        feelings+="I love that "
    else :
        feelings+="I hate that "
    
    
lastword="it"

fixed_feeling = feelings.strip().rsplit(' ', 1)[0]
fixed_feeling=fixed_feeling+" "+lastword
print(fixed_feeling)




