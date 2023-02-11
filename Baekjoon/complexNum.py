def dfs(i, j):
    if i <= -1 or i >= len(grid) or j <= -1 or j >= len(grid) or grid[i][j] != 1:
        return
    global count
    count += 1

    grid[i][j] = 0
    dfs(i-1, j)
    dfs(i+1, j)
    dfs(i, j-1)
    dfs(i, j+1)

n = int(input())
grid = []
house = []
count = 0
total = 0

for i in range(n):
    grid.append(list(map(int, input())))

for i in range(n):
    for j in range(n):
        if grid[i][j] == 1:
            dfs(i, j)
            house.append(count)
            count = 0
            total += 1

print(total)
house.sort()
print(*house, sep='\n')