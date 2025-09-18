# ODD DIVISOR



n = int(input())

for _ in range(n):
    i = int(input())

    if i & (i-1) == 0:
          print("NO")
    else:
         print("YES")