# Problem: https://codeforces.com/contest/499/problem/B
# Submission: https://codeforces.com/contest/499/submission/348252274
# Language: Python 3
# Solved at: 2025-11-29 23:08:31

n,m=map(int,input().split())

lang1=[]
lang2=[]
chosen=[]
for i in range(m):
    a,b=map(str,input().split())
    lang1.append(a)
    lang2.append(b)

lecture=list(map(str,input().split()))

mapping={}
for j in range(m):
    if len(lang1[j]) <= len(lang2[j]):
        mapping[lang1[j]]=lang1[j]
        mapping[lang2[j]]=lang1[j]
    
    else:
        mapping[lang1[j]]=lang2[j]
        mapping[lang2[j]]=lang2[j]

result=[]
for word in lecture:
    result.append(mapping[word])

print(' '.join(result))
