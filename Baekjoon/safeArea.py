import copy
import sys

sys.setrecursionlimit(10 ** 6)

def dfs(y, x):
    if y <= -1 or y >= n or x <= -1 or x >= n or trial[y][x] != 0:
        return
    trial[y][x] = 1
    dfs(y-1, x)
    dfs(y+1, x)
    dfs(y, x-1)
    dfs(y, x+1)

n = int(input())
grid = []
answer = 0

dy = [-1, 1, 0, 0]
dx = [0, 0, 1, 1]

for _ in range(n):
    grid.append(list(map(int, input().split())))

maximum = max(max(grid))

for i in range(maximum):
    trial = copy.deepcopy(grid)
    count = 0

    for y in range(n):
        for x in range(n):
            if trial[y][x] <= i:
                trial[y][x] = 1
            else:
                trial[y][x] = 0

    for y in range(n):
        for x in range(n):
            if trial[y][x] == 0:
                dfs(y, x)
                count += 1

    answer = max(answer, count)

print(answer)
