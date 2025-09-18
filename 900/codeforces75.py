t= int(input())

for _ in range(t):

    s=input()
    s=s.strip()
    count0=s.count('0')
    count1=s.count('1')

    if min(count0,count1)%2==0:
        print("NET")
    else:
        print("DA")