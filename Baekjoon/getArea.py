import sys
sys.setrecursionlimit(10**6)

def dfs(x, y):
    if x <= -1 or x >= m or y <= -1 or y >= n or grid[x][y] != 0:
        return
    grid[x][y] = 1

    global area
    area += 1

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        dfs(nx, ny)


dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

m, n, k = map(int, input().split())

grid = [[0] * n for _ in range(m)]

for _ in range(k):
    lx, ly, rx, ry = map(int, input().split())

    for i in range(m - ry, m - ly):
        for j in range(lx, rx):
            if grid[i][j] == 0:
                grid[i][j] = 1

answer = []

for i in range(m):
    for j in range(n):
        if grid[i][j] == 0:
            area = 0
            dfs(i, j)
            answer.append(area)

answer.sort()
print(len(answer))
print(*answer)
