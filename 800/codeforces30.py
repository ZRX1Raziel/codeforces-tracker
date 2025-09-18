n= int(input())

drinks=list(map(int,input().split()))


drinksum= sum(drinks)

avgdrink=drinksum/n

print(avgdrink)