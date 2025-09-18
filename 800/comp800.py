n= int(input())
numarr=[]
for _ in range(n):
    numarr.append(input())



for i in range(len(numarr)):
    charset = set(numarr[i])
    newcharset = sorted(charset)
    print(newcharset[0])