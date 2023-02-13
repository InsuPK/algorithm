import sys
import copy
sys.setrecursionlimit(10**6)

def dfs1(y, x, c, grid):
        if y <= -1 or y >= n or x <= -1 or x >= n or grid[y][x] != c:
            return
        grid[y][x] = "@"

        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]

            dfs1(ny, nx, c, grid)

n = int(input())
color = []
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

for _ in range(n):
    color.append(list(input()))

colorBlind = copy.deepcopy(color)

for y in range(n):
    for x in range(n):
        if colorBlind[y][x] == "G":
            colorBlind[y][x] = "R"

total1 = 0
total2 = 0
for y in range(n):
    for x in range(n):
        if color[y][x] != "@":
            dfs1(y, x, color[y][x], color)
            total1 += 1

for y in range(n):
    for x in range(n):
        if colorBlind[y][x] != "@":
            dfs1(y, x, colorBlind[y][x], colorBlind)
            total2 += 1

print(total1, total2, end=" ")