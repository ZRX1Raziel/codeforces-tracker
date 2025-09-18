n,m =map(int,input().split())

puzzles=list(map(int,input().split()))

puzzles.sort()

l=0
r=(l+n)-1
mindiff=float('inf')
midif=float('inf')
while r<m:
    
    midif=puzzles[r]-puzzles[l]

    mindiff=min(midif,mindiff)
    l+=1
    r+=1


print(mindiff)




