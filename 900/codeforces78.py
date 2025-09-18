t = int(input())

for _ in range(t):
    n,a,b=map(int,input().split())
    distinct_chars=''
    for i in range(b):
        distinct_chars+=chr(ord('a')+i)
    result= distinct_chars*((n//b)+1)
    print(result[:n])
    
