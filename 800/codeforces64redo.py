import sys

t = int(sys.stdin.readline())
for _ in range(t):
    n = int(sys.stdin.readline())

    # Read exactly n integers even if they span multiple lines
    a = []
    while len(a) < n:
        a.extend(map(int, sys.stdin.readline().split()))
    a = a[:n]

    a.sort()
    ok = True
    for i in range(1, n):
        if a[i] - a[i - 1] > 1:
            ok = False
            break

    print("YES" if ok else "NO")
