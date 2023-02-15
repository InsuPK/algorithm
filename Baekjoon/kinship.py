from collections import deque

def bfs(a):
    count = 1
    queue = deque()
    queue.append(a)
    visited[a] = count

    while queue:
        kinshipx = False
        kinshipy = False

        index = queue.popleft()

        for i in grid[index]:
            if (index == x and i == y) or (index == y and i == x):
                print(1)
                exit()

            if i == x:
                kinshipx = True
            if i == y:
                kinshipy = True

            if kinshipx and kinshipy:
                print(2)
                exit()

            if visited[i] == 0:
                visited[i] = visited[index] + 1
                queue.append(i)


n = int(input())
grid = [[] for _ in range(n + 1)]
visited = [0] * (n + 1)

x, y = map(int, input().split())
m = int(input())

for _ in range(m):
    a, b = map(int, input().split())
    grid[a].append(b)
    grid[b].append(a)

for i in range(1, n + 1):
    if visited[i] == 0:
        bfs(i)
        if (visited[x] != 0 and visited[y] == 0) or (visited[x] == 0 and visited[y] != 0):
            print(-1)
            exit()

print(visited[x] - 1 + visited[y] - 1)