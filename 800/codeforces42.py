n = int(input())

h=[]
a=[]

for _ in range(n):
    hu,au = map(int, input().split())
    h.append(hu)
    a.append(au)

count=0

for i in range(n):
    for j in range(n):
        if i!=j:
            if h[i]== a[j]:
                count+=1

print(count)