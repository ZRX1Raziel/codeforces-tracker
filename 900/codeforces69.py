t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()

    # Frequency array for 'a' to 'z'
    freq = [0] * 26
    for ch in s:
        freq[ord(ch) - ord('a')] += 1

    # Count how many characters have odd frequency
    odd_count = 0
    for count in freq:
        if count % 2 == 1:
            odd_count += 1

    # We can remove up to k odd-frequency chars
    odd_after = odd_count - min(k, odd_count)

    remaining_len = n - k

    if (remaining_len % 2 == 0 and odd_after == 0) or (remaining_len % 2 == 1 and odd_after <= 1):
        print("YES")
    else:
        print("NO")
