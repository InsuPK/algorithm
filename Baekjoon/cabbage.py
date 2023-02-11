# import sys
# # sys.setrecursionlimit(10**6)
# def dfs(y, x):
#     if x <= -1 or x >= m or y <= -1 or y >= n or grid[y][x] != 1:
#         return
#     grid[y][x] = 0
#     dfs(y-1, x)
#     dfs(y+1, x)
#     dfs(y, x-1)
#     dfs(y, x+1)
#
# t = int(input())
#
# print(sys.getrecursionlimit())
#
# for _ in range(t):
#     worm = 0
#     m, n, total = map(int, input().split())
#     grid = [[0] * m for _ in range(n)]
#     for _ in range(total):
#         x, y = map(int, input().split())
#         grid[y][x] = 1
#
#     for y in range(n):
#         for x in range(m):
#             if grid[y][x] == 1:
#                 dfs(y, x)
#                 worm += 1
#
#     print(worm, sep='\n')
#

from collections import deque
def bfs(b, a):
    queue = deque()
    queue.append([b, a])

    while queue:
        y, x = queue.popleft()

        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]

            if ny <= -1 or ny >= n or nx <= -1 or nx >= m:
                continue
            if grid[ny][nx] == 0:
                continue
            if grid[ny][nx] == 1:
                grid[ny][nx] = 0
                queue.append([ny, nx])

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

t = int(input())
for _ in range(t):
    worm = 0
    m, n, total = map(int, input().split())
    grid = [[0] * m for _ in range(n)]
    for _ in range(total):
        x, y = map(int, input().split())
        grid[y][x] = 1

    for y in range(n):
        for x in range(m):
            if grid[y][x] == 1:
                bfs(y, x)
                worm += 1

    print(worm, sep='\n')

