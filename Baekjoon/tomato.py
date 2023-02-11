# import time
# import threading
# from collections import deque
# def bfs(b, a):
#     queue = deque()
#     queue.append([b, a])
#
#     while queue:
#         y, x = queue.popleft()
#
#         for i in range(4):
#             ny = y + dy[i]
#             nx = x + dx[i]
#
#             if ny <= -1 or ny >= n or nx <= -1 or nx >= m:
#                 continue
#             if grid[ny][nx] == -1:
#                 continue
#             if grid[ny][nx] == 0:
#                 grid[ny][nx] = grid[y][x] + 1
#                 queue.append([ny, nx])
#
#         time.sleep(0.001)
#
#
# m, n = map(int, input().split())
# grid = []
#
# dx = [-1, 1, 0, 0]
# dy = [0, 0, -1, 1]
#
# for _ in range(n):
#     grid.append(list(map(int, input().split())))
#
# index = []
#
# for y in range(n):
#     for x in range(m):
#         if grid[y][x] == 1:
#             index.append([y, x])
#
# threads = []
# for i in range(len(index)):
#     y, x = index[i]
#     t = threading.Thread(target=bfs, args=(y, x,))
#     t.start()
#     threads.append(t)
#
# for t in threads:
#     t.join()
#
# if any(0 in i for i in grid):
#     print(-1)
# else:
#     print(max(map(max, grid)) - 1)

from collections import deque
def bfs():
    queue = deque()
    for i in range(len(index)):
        queue.append(index[i])

    while queue:
        y, x = queue.popleft()

        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]

            if ny <= -1 or ny >= n or nx <= -1 or nx >= m:
                continue
            if grid[ny][nx] == -1:
                continue
            if grid[ny][nx] == 0:
                grid[ny][nx] = grid[y][x] + 1
                queue.append([ny, nx])

m, n = map(int, input().split())
grid = []

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

for _ in range(n):
    grid.append(list(map(int, input().split())))

index = []

for y in range(n):
    for x in range(m):
        if grid[y][x] == 1:
            index.append([y, x])

bfs()

if any(0 in i for i in grid):
    print(-1)
else:
    print(max(map(max, grid)) - 1)