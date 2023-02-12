import sys
sys.setrecursionlimit(10**6)
def dfs(y, x):
    if y <= -1 or y >= h or x <= -1 or x >= w or grid[y][x] != 1:
        return
    grid[y][x] = 0
    for i in range(8):
        dfs(y + dy[i], x + dx[i])

dy = [-1, 1, 0, 0, -1, -1, 1, 1]
dx = [0, 0, -1, 1, -1, 1, -1, 1]

while True:
    w, h = map(int, input().split())

    if w == 0 and h == 0:
        break

    grid = []

    for _ in range(h):
        grid.append(list(map(int, input().split())))

    count = 0

    for y in range(h):
        for x in range(w):
            if grid[y][x] == 1:
                dfs(y, x)
                count += 1

    print(count)