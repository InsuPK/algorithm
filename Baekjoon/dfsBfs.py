from collections import deque

def dfs(num, visited, graph):
    visited[num] = True
    print(num, end=' ')
    for i in graph[num]:
        if not visited[i]:
            dfs(i, visited, graph)

v, e, n = map(int, input().split())
graph = [[] for _ in range(v+1)]

for _ in range(e):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

for i in range(v+1):
    graph[i] = sorted(graph[i])

visitedDfs = [False] * (v+1)
visitedBfs = [False] * (v+1)

queue = deque([n])
visitedBfs[n] = True

dfs(n, visitedDfs, graph)

print()

while queue:
    num = queue.popleft()
    print(num, end=' ')

    for i in graph[num]:
        if visitedBfs[i] == False:
            queue.append(i)
            visitedBfs[i] = True

