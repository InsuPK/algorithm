import sys
input = sys.stdin.readline

n = int(input())
grid = [[] for _ in range(n+1)]

for _ in range(n-1):
    x, y = map(int, input().split())
    grid[x].append(y)
    grid[y].append(x)

visited = [0] * (n+1)
stack = [1]

while stack:
    index = stack.pop()

    for i in grid[index]:
        if not visited[i]:
            visited[i] = index
            stack.append(i)

for i in range(2, n+1):
    print(visited[i])
