n=int(input())

polyhedron={"Tetrahedron":4 ,"Cube":6,"Octahedron":8,"Dodecahedron":12,"Icosahedron":20 }

arr=[]

for _ in range(n):
    arr.append(input())


count=0
for shape in arr:
    count+=polyhedron[shape]

print(count)
