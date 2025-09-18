n, m, a = map(int, input().split())

nlength = n // a if n % a == 0 else n // a + 1
mlength = m // a if m % a == 0 else m // a + 1

print(nlength * mlength)
