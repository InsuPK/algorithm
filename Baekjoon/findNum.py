import sys
input = sys.stdin.readline

n = int(input())
num = list(map(int, input().split()))
m = int(input())
find = list(map(int, input().split()))

num.sort()

for i in find:
    low = 0
    high = len(num) - 1
    flag = False

    while low <= high:
        mid = (low + high) // 2

        if num[mid] == i:
            print(1)
            flag = True
            break
        elif i < num[mid]:
            high = mid - 1
        else:
            low = mid + 1

    if not flag:
        print(0)
