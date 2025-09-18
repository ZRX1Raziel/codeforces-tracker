n= int(input())
s=input()

s.strip()
count0=s.count('0')
count1=s.count('1')

noofremovals= min(count0,count1)

newlen=n-(2*noofremovals)

print(newlen)