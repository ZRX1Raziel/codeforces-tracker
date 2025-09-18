s = input()

stringerset=set()

for char in s :
    if char not in  stringerset:
        stringerset.add(char)




if len(stringerset) %2 ==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")