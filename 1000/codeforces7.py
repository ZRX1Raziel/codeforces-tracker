s=input()

if s.isupper():
    s=s.lower()
elif s[1:].isupper():
    s=s[0].upper()+s[1:].lower()
elif len(s)==1 and s.lower():
    s=s.upper()
else:
    s=s

print(s)
    