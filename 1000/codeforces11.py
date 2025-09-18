n=int(input())
goals={}

for _ in  range(n):
    s=input()
    if s in goals:
        goals[s]+=1
    else:
        goals[s]=1

winner=max(goals,key=goals.get)

print(winner)