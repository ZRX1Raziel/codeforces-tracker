#Hit the lottery

n= int(input())

casharr=[100,20,10,5,1]

rem=n
noofbills=0


for cash in casharr:
    while (rem>=cash):
        noofbills+=rem//cash
        rem%=cash
    
print(noofbills)