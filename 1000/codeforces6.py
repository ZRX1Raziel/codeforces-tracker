a = int(input())
b = int(input())
c = int(input())

values = [
    a + b + c,
    a * b * c,
    (a + b) * c,
    a * (b + c)
]

print(max(values))
