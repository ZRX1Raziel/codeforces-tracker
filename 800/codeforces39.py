k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
count=0

for dragon in range(1,d+1):
    if dragon%k==0 or dragon%l==0 or dragon%m==0 or dragon%n==0 :
        count+=1


print(count)
        