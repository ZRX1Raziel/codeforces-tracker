# Problem: https://codeforces.com/contest/1433/problem/A
# Submission: https://codeforces.com/contest/1433/submission/340660657
# Language: Python 3
# Solved at: 2025-10-03 21:54:17

# Read input, compute answers for each test case
import sys

data = sys.stdin.read().strip().split()
t = int(data[0])
out = []
idx = 1
for _ in range(t):
    s = data[idx]; idx += 1
    d = int(s[0])
    k = len(s)
    ans = (d - 1) * 10 + k * (k + 1) // 2
    out.append(str(ans))

print("\n".join(out))
