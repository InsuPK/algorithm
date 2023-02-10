# class Solution(object):
#     def dfs(self, grid, x, y):
#         if x <= -1 or x >= len(grid[0]) or y <= -1 or y >= len(grid):
#             return False
#
#         if grid[x][y] == 1:
#             grid[x][y] = 0
#             self.dfs(grid, x - 1, y)
#             self.dfs(grid, x + 1, y)
#             self.dfs(grid, x, y - 1)
#             self.dfs(grid, x, y + 1)
#             return True
#
#         return False
#
#     def numIslands(self, grid):
#         island = 0
#         for i in range(len(grid)):
#             for j in range(len(grid[0])):
#                 if self.dfs(grid, i, j) == True:
#                         island += 1
#         return island
#
# grid = [
#   ["1","1","1","1","0"],
#   ["1","1","0","1","0"],
#   ["1","1","0","0","0"],
#   ["0","0","0","0","0"]
# ]
#
# s = Solution()
# print(s.numIslands(grid))

def dfs(x, y):
    if x <= -1 or x >= len(grid[0]) or y <= -1 or y >= len(grid):
        return False

    if grid[x][y] == "1":
        grid[x][y] = "0"
        dfs(x - 1, y)
        dfs(x + 1, y)
        dfs(x, y - 1)
        dfs(x, y + 1)
        return True

    return False

grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]

result = 0

for i in range(len(grid)):
    for j in range(len(grid[0])):
        if dfs(i, j) == True:
            result += 1
print(result)