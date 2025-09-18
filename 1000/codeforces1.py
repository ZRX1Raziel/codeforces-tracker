s= input()
s1=s.lower()
s2=""
vowels="aeiouy"

for c in s1:
    if c not in vowels:
        s2+='.'+c

print(s2)
