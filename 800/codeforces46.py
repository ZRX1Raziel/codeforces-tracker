import sys

n = int(input())

store = []
for _ in range(n):
    store.append(int(input()))

for q in range(n):
    numstr = str(store[q])
    length = len(numstr)
    arr = []
    
    for i in range(length):
        digit = numstr[i]
        if digit != '0':
            place_value = int(digit) * (10 ** (length - i - 1))
            arr.append(place_value)
    
    print(len(arr))  # print number of non-zero place values
    
    for val in arr:
        sys.stdout.write(str(val) + " ")  # convert int to string
    
    sys.stdout.write("\n")
