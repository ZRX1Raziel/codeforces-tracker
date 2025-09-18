import sys

n , m = map(int,input().split())

flag=0
for i in range(n):
    for j in range(m):
        if i%2==0:
           sys.stdout.write("#")
        elif j==m-1 and flag ==0:
            sys.stdout.write("#")
        elif j==0 and flag==1:
                sys.stdout.write("#")
                
          
        else:
            sys.stdout.write(".")
    sys.stdout.write("\n")
    if i%2==1:
         flag ^=1
    