import time
import threading
def a(a):
    x = 0
    y = 0
    while a < 9:
        print('a')
        if grid[y][x] == 0:
            grid[y][x] = a
        a += 1
        x += 1
        #print(grid)
        time.sleep(0.1)
def b(a):
    x = 9
    y = 0
    while a < 9:
        print('b')
        if grid[y][x] == 0:
            grid[y][x] = a
        a += 1
        x -= 1
        #print(grid)
        time.sleep(0.1)


grid = [[0] * 10 for _ in range(2)]
print(grid)
a = threading.Thread(target=a, args=(0,))
b= threading.Thread(target=b, args=(0,))

a.start()
b.start()

a.join()
b.join()
print(grid)