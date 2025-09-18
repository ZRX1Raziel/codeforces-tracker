n , k = map(int,input().split())

# no of minutes that is there in total is 240 min
# It takes him k number of minutes to get where he needs to go 

noofproblems=0
timeforproblem=0
totaltime=0
for i in range(1,n+1):
    timeforproblem=5*i
    totaltime+=timeforproblem
    if 240-k-totaltime >=0:
        noofproblems+=1
    
    

print(noofproblems)
