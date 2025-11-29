# Problem: https://codeforces.com/contest/32/problem/B
# Submission: https://codeforces.com/contest/32/submission/349440307
# Language: Python 3
# Solved at: 2025-11-29 23:08:45

code=input()


i=0
numbers=""

while i<len(code):

    if code[i]=='.':
        numbers+='0'
        i+=1
    else:
        if code[i+1]=='.':
            numbers+='1'
        elif code[i+1]=='-':
            numbers+='2'
        i+=2



        
print(numbers)
        


