# Problem: https://codeforces.com/contest/34/problem/A
# Submission: https://codeforces.com/contest/34/submission/344763460
# Language: Python 3
# Solved at: 2025-10-27 20:55:12

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    neg = a.count(-1)
    pos = n - neg
    ops = 0

    # Make sure sum >= 0
    while pos < neg:
        neg -= 1
        pos += 1
        ops += 1

    # Make sure product = 1 (even number of -1s)
    if neg % 2 == 1:
        ops += 1

    print(ops)
