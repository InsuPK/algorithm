import sys
sys.setrecursionlimit(10**6)

def dfs(x):
    visited[x] = True

    for i in grid[x]:
        if not visited[i]:
            dfs(i)


n, m = map(int, sys.stdin.readline().split())
grid = [[] for _ in range(1001)]
visited = [False] * (1001)

for _ in range(m):
    x, y = map(int, sys.stdin.readline().split())
    grid[x].append(y)
    grid[y].append(x)

total = 0

for i in range(1, n+1):
    if not visited[i]:
        dfs(i)
        total += 1

print(total)