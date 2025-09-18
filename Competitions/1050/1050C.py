import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = [0]   # include dummy start
    b = [0]
    for _ in range(n):
        ai, bi = map(int, input().split())
        a.append(ai)
        b.append(bi)

    ans = 0
    for i in range(n):  # from requirement i to i+1
        gap = a[i+1] - a[i]
        need = abs(b[i+1] - b[i])
        if (gap % 2) == (need % 2):
            ans += gap
        else:
            ans += gap - 1

    ans += m - a[-1]    # free running after last requirement
    print(ans)
