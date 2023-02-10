def dfs(num, visited, computer):
    visited[num] = True
    for i in computer[num]:
        if not visited[i]:
            dfs(i, visited, computer)

n = int(input())
pair = int(input())
computer = [[] for _ in range(n+1)]
visited = [False] * (n+1)

for _ in range(pair):
    x, y = map(int, input().split())
    computer[x].append(y)
    computer[y].append(x)

dfs(1, visited, computer)
answer = 0
for i in range(2, n+1):
    if visited[i]:
        answer += 1

print(answer)