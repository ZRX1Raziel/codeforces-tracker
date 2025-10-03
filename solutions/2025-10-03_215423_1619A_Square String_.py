# Problem: https://codeforces.com/contest/1619/problem/A
# Submission: https://codeforces.com/contest/1619/submission/341241725
# Language: Python 3
# Solved at: 2025-10-03 21:54:23

t = int(input().strip())

for _ in range(t):
    s = input().strip()
    n = len(s)
    
    if n % 2 != 0:
        print("NO")
    else:
        mid = n // 2
        if s[:mid] == s[mid:]:
            print("YES")
        else:
            print("NO")
