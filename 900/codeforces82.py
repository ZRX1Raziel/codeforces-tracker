t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    
    
   
    cost=1
    coster=1
    for i in range(1,len(s)):
            
            if s[i]==s[i-1]:
                cost+=1
                
            else:
                cost=1

            coster=max(cost,coster)
            


    print(coster+1)
            