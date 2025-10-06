# Problem: https://codeforces.com/contest/2150/problem/A
# Submission: https://codeforces.com/contest/2150/submission/341898182
# Language: Python 3
# Solved at: 2025-10-06 15:41:50

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    s = input().strip()
    black = set(map(int, input().split()))

    cur = 1
    for c in s:
        cur += 1
        if c == 'B':
            while cur in black:
                cur += 1
        black.add(cur)
        if c == 'B':
            while cur in black:
                cur += 1

    print(len(black))
    print(*sorted(black))
