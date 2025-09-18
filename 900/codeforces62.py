n=int(input())

for _ in range(n):
        i = int(input())
        cnt2=0
        cnt3=0
        while i%2==0:
                
                i/=2
                cnt2+=1
                
        while i%3==0:
                
                    i/=3
                    cnt3+=1

        if cnt2>cnt3 or i!=1:
                print("-1")
        else:
                print((cnt3-cnt2)+cnt3)
