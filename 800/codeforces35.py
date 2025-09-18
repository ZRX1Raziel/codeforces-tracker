n=int(input())
s=input()

s=s.lower()
if n<26:
    print("NO")

elif all (chr(c) in s for c in range(ord('a'),ord('z') +1) ):
    print("YES")
else:
    print("NO")