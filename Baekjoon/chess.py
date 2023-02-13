from collections import deque

def bfs():
    queue = deque()
    queue.append([sy, sx])

    while queue:
        if grid[ey][ex] != 0:
            break

        y, x = queue.popleft()

        for i in range(8):
            ny = dy[i] + y
            nx = dx[i] + x

            if ny <= -1 or ny >= l or nx <= -1 or nx >= l:
                continue
            if grid[ny][nx] == 0:
                grid[ny][nx] = grid[y][x] + 1
                queue.append([ny, nx])


dy = [-2, -2, -1, -1, 1, 2, 1, 2]
dx = [-1, 1, -2, 2, -2, -1, 2, 1]
n = int(input())

for _ in range(n):
    l = int(input())
    grid = [[0] * l for _ in range(l)]

    sx, sy = map(int, input().split())
    ex, ey = map(int, input().split())

    if sx == ex and sy == ey:
        print(0, sep='\n')
    else:
        bfs()
        print(grid[ey][ex], sep='\n')