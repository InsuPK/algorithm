def dfs(x, y):
    if x <= -1 or x >= r or y <= -1 or y >= c:
        return

    for i in range(4):
        nx = dx[i] + x
        ny = dy[i] + y

        historyGrid[nx][ny] = historyGrid[x][y][:]

        if alphaGrid[nx][ny] not in historyGrid[nx][ny]:
            historyGrid[nx][ny].append(alphaGrid[nx][ny])
            numGrid[nx][ny] = max(numGrid[nx][ny], numGrid[x][y] + 1)
            dfs(ny, nx)

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

r, c = map(int, input().split())
alphaGrid = []
for _ in range(r):
    alphaGrid.append(list(map(str, input())))
numGrid = [[0] * c for _ in range(r)]
historyGrid = [[[] for _ in range(c)] for _ in range(r)]

numGrid[0][0] = 1
historyGrid[0][0].append(alphaGrid[0][0])

dfs(0, 0)

print(max(max()))


print()

