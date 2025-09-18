n = int(input())
strn=""

if n >=0:
    print(n)
else:
    strn=str(n)
    last=int(strn[0:len(strn)-1])
    secondlast=int(strn[0:len(strn)-2]+strn[len(strn)-1])
    print(max(last,secondlast))
    



