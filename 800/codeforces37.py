n=int(input())

soldiers=list(map(int,input().split()))

tallest=soldiers[0]
tallestid=0
shortestid=0
shortest=soldiers[0]

for id, soldier in enumerate (soldiers):
    if soldier>tallest:
        tallest=soldier
        tallestid= id

    if soldier<=shortest:
        shortest=soldier
        shortestid=id



length=len(soldiers)


tallswap=tallestid
shortswap=length-1-shortestid


if tallestid>shortestid:
    print(tallswap+shortswap-1)
else:
    print(tallswap+shortswap)
