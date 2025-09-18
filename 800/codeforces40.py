letter = set(input())

distinct_letters=0
count=0
for a in letter:
    if a.isalpha():
        count+=1

print(count)