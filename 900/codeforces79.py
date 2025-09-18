t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    arr = [list(input().strip()) for _ in range(n)]

    # collect all '#' positions
    hashes = [(i+1, j+1) for i in range(n) for j in range(m) if arr[i][j] == '#']

    # case 1: only one '#'
    if len(hashes) == 1:
        print(hashes[0][0], hashes[0][1])
        continue

    # case 2: find row with the most '#'
    best_row, best_len, best_cols = -1, -1, []
    for i in range(n):
        cols = [j+1 for j in range(m) if arr[i][j] == '#']
        if len(cols) > best_len:
            best_len = len(cols)
            best_row = i+1   # row index (1-indexed)
            best_cols = cols

    # center column = middle element in that row
    center_col = best_cols[len(best_cols)//2]
    print(best_row, center_col)
