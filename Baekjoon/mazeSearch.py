from collections import deque

def bfs():
    queue = deque()
    queue.append([0, 0])

    while queue:
        if maze[n-1][m-1] > 1:
            break

        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx <= -1 or nx >= n or ny <= -1 or ny >= m:
                continue
            if maze[nx][ny] == 0:
                continue
            if maze[nx][ny] == 1:
                maze[nx][ny] = maze[x][y] + 1
                queue.append([nx, ny])

    return maze[n-1][m-1]

n, m = map(int, input().split())
maze = []
for _ in range(n):
    maze.append(list(map(int, input())))

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

print(bfs())




