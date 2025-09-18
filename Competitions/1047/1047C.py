import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    num=0
    if a%2==0 and b%2==0:
        k=b//2
        num=a*k+b//k
    elif a%2==0 and b%2!=0:
        num=-1
    elif a%2!=0 and b%2==0 and b%4!=0:
        num=-1
    elif a%2!=0 and b%4==0 :
        k=b//2
        num=a*k+b//k
    else:
        k=b
        num=a*b+1
    print(num)

