# Problem: https://codeforces.com/contest/514/problem/A
# Submission: https://codeforces.com/contest/514/submission/345849126
# Language: Python 3
# Solved at: 2025-10-27 20:56:09

x=input()

newstr=""

for i  in range(len(x)):
    newint=int(x[i])
    if i==0:
        if newint==9:
            newint=9
        elif newint>4:
            newint=9-newint
    else:    
        if newint>4:
            newint=9-newint
    newchar=str(newint)
    newstr+=newchar
     

print(newstr)