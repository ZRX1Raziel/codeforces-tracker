n , m = map(int,input().split())
count=0
while n >0 and m >0:
    n-=1 
    m-=1
    count+=1

if count%2==0:
    print("Malvika")
else:
    print("Akshat")

'''BIG BRAIN VERSION


basically my method we are counting each stick being removed . However there is a baller method to do this and that is to use brain 

Pretty much we know that when we remove sticks we remove both row and column . Technically if n=3 and m=1 if n and m removed , then akshat auto wins 

so we can do the same thing without loop 



CODE

if min(n,m)%2 ==0:
    print("Malvika)
else:
    print("Akshat)

as Akshat starts first if the min number of sticks are odd he wins else Malvika wins this is o(1) time complexity lol
'''