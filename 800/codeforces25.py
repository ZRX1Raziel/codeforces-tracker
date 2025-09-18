n,t = map(int,input().split())



s=input()

s1=list(s)

while t>0:
    i=0
    while  i < n :
        if i< n-1 and s1[i]=='B' and s1[i+1]=='G' :
            s1[i],s1[i+1]="G","B"
            i+=1
        i+=1
    t-=1
s2=''.join(s1)
print(s2) 