t = int(input())


for _ in range(t):
    num=input()
    num1 = int(num[0])+int(num[1])+int(num[2])
    num2 = int(num[3])+int(num[4])+int(num[5])

    if num1 == num2:
        print("YES")
    else:
        print("NO")