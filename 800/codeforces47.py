x1 ,x2 ,x3= map(int,input().split())


mindistance=0
dist1=abs(x2-x1)+abs(x3-x1)
dist2=abs(x1-x2)+abs(x3-x2)
dist3=abs(x1-x3)+abs(x2-x3)

mindistance = min(dist1,dist2,dist3)

print(mindistance)

