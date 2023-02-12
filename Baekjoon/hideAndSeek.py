from collections import deque
def bfs(a, b):
    queue = deque()
    queue.append(a)

    while queue:
        if grid[b] != 0:
            break

        x = queue.popleft()

        for i in range(2):
            nx = x + dx[i]
            if nx <= -1 or nx >= 100001:
                continue
            if grid[nx] != 0:
                continue
            if grid[nx] == 0:
                grid[nx] = grid[x] + 1
                queue.append(nx)

        nx = x * 2
        if nx <= -1 or nx >= 100001:
            continue
        if grid[nx] != 0:
            continue
        if grid[nx] == 0:
            grid[nx] = grid[x] + 1
            queue.append(nx)

n, k = map(int, input().split())
grid = [0 for _ in range(100001)]
dx = [-1, 1]
grid[n] = 1

bfs(n, k)
print(grid[k]-1)