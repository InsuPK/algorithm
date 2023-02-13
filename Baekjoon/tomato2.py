import sys
from collections import deque
input = sys.stdin.readline

def bfs():
    queue = deque()
    for i in range(len(location)):
        queue.append(location[i])

    while queue:
        z, y, x = queue.popleft()

        for i in range(6):
            nz = z + dz[i]
            ny = y + dy[i]
            nx = x + dx[i]

            if nz <= -1 or nz >= h or ny <= -1 or ny >= n or nx <= -1 or nx >= m:
                continue
            if grid[nz][ny][nx] == 0:
                grid[nz][ny][nx] = grid[z][y][x] + 1
                queue.append([nz, ny, nx])

m, n, h = map(int, input().split())
grid = [[] for _ in range(h)]
location = []

dz = [-1, 1, 0, 0, 0, 0]
dy = [0, 0, 0, 0, -1, 1]
dx = [0, 0, -1, 1, 0, 0]

for i in range(h):
    for _ in range(n):
        grid[i].append(list(map(int, input().split())))

for i in range(h):
    for j in range(n):
        for k in range(m):
            if grid[i][j][k] == 1:
                location.append([i, j, k])

bfs()

if any(0 in j for i in range(h) for j in grid[i]):
     print(-1)
else:
    print(max(max(map(max, grid[i])) for i in range(h)) - 1)

# count = 0
# for i in range(h):
#     for j in range(n):
#         for k in range(m):
#             if grid[i][j][k] == 0:
#                 print(-1)
#                 exit()
#             count = max(count, grid[i][j][k])
# print(count - 1)
