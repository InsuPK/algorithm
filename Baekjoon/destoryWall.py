from collections import deque
import sys
input = sys.stdin.readline
def bfs():
    queue = deque()
    trial = [item[:] for item in grid]

    queue.append([0, 0])

    while queue:
        if trial[n-1][m-1] != 0:
            break
        y, x = queue.popleft()

        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]

            if ny <= -1 or ny >= n or nx <= -1 or nx >= m:
                continue
            if trial[ny][nx] == 0:
                trial[ny][nx] = trial[y][x] + 1
                queue.append([ny, nx])

    global answer
    if trial[n-1][m-1] >= 1:
        answer = min(answer, trial[n-1][m-1])

def breakWall():
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 1:
                grid[i][j] = 0
                bfs()
                grid[i][j] = 1

n, m = map(int, input().split())
grid = []
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

for _ in range(n):
    grid.append(list(map(int, input().strip())))

answer = float("inf")

bfs()
breakWall()

if n == 1 and m == 1:
    print(1)
elif answer == float("inf"):
    print(-1)
else:
    print(answer+1)


from collections import deque
import sys
input = sys.stdin.readline

def bfs():
    queue = deque()
    queue.append([0, 0, 0])

    while queue:
        x, y, w = queue.popleft()

        if x == n - 1 and y == m - 1:
            return visited[x][y][w]

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx <= -1 or nx >= n or ny <= -1 or ny >= m:
                continue
            if grid[nx][ny] == 1 and w == 0:
                visited[nx][ny][1] = visited[x][y][0] + 1
                queue.append([nx, ny, 1])
            if grid[nx][ny] == 0 and visited[nx][ny][w] == 0:
                visited[nx][ny][w] = visited[x][y][w] + 1
                queue.append([nx, ny, w])

    return -1


n, m = map(int, input().split())
grid = []

for _ in range(n):
    grid.append(list(map(int, input().strip())))

visited = [[[0] * 2 for _ in range(m)] for _ in range(n)]
visited[0][0][0] = 1

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

print(bfs())
