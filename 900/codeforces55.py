import sys

n = int(input())

cubes = list(map(int,input().split()))

cubes.sort()

for i in range(n):
    sys.stdout.write(str(cubes[i])+" ")