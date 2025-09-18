t =int(input())

s =input()

ngram={}

for i in range(1,t):
    ng=s[i-1]+s[i]
    if ng in ngram:
        ngram[ng]+=1
    else:
        ngram[ng]=1

maxvalue = max(ngram, key=ngram.get)

print(maxvalue)