n,b,d=map(int,input().split())
oranges=list(map(int,input().split()))
waste_empty=0
orangestore=0

for orange in oranges:
    if orange>b:
        continue
    else:
        orangestore+=orange
    
    if orangestore>d:
        orangestore=0
        waste_empty+=1
    
print(waste_empty)