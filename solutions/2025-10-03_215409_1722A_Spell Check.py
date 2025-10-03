# Problem: https://codeforces.com/contest/1722/problem/A
# Submission: https://codeforces.com/contest/1722/submission/340071623
# Language: Python 3
# Solved at: 2025-10-03 21:54:09

t=int(input())


for _ in range(t):
    n=int(input())
    s=input()
    flagt=0
    flagr=0
    flagi=0
    flagm=0
    flagu=0
    if n!=5:
        print("NO")
    else:
        for char in s:
            if char=='T':
                flagt+=1
            elif char=='i':
                flagi+=1
            elif char=='m':
                flagm+=1
            elif char=='u':
                flagu+=1
            elif char=='r':
                flagr+=1
            
        if flagt ==1 and flagr==1 and flagi==1 and flagm==1 and flagu==1:
            print("YES")
        else:
            print("NO")