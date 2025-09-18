nums=list(map(int,input().split()))

nums.sort()

num1=nums[3]-nums[2]
num2=nums[0]-num1
num3=nums[2]-num2

print (f"{num1} {num2} {num3}")
