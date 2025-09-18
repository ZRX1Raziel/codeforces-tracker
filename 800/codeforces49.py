n = int(input())
polcrime=list(map(int,input().split()))
police=0
crime=0
totcrime=0
for i in range(n):
    if polcrime[i]!=0:
        police+=polcrime[i]
        crime=0
    else:
        crime+=1
    if polcrime[i]==-1:
        if police<crime:
            crime-=police
            police=0
            totcrime+=1
        elif police>crime:
            police-=crime
            crime=0
        else:
            police=0
            crime=0
        

print(totcrime)