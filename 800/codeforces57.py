a,b=map(int,input().split())

no_of_fashdays= min(a,b)
moresock=max(a,b)
no_of_unfash=(moresock-no_of_fashdays)//2
print(f"{no_of_fashdays} {no_of_unfash}")
