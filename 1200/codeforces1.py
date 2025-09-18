lim=200000
presum=[0]

for i in range(1,lim+1):
    
    s=str(i)
    sumer=0
    for j in range(len(s)):
            sumer+=int(s[j])

    presum.append(sumer+presum[i-1])

t=int(input())

for _ in range(t):
      n=int(input())
      print(presum[n])
