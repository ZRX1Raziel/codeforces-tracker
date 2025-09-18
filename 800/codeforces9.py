s = input()
arr=[]
news=""
for char in s :
    if char.isnumeric():
        arr.append(char)

arr.sort()

for i in range(len(arr)):
    if i == len(arr)-1:
        news+= arr[i]

    else:
        news+=arr[i]+"+"
 
print(news)

