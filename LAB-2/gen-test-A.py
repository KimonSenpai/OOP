# Данная программа генерирует тестовые файлы типа A.

import random as rd
import os
M, N, q = 4, 5, 0
tc = 20

if not os.path.isdir("testsA"):
    os.mkdir("testsA")

for i in range(1, tc + 1):
    with open(f'testsA/{i:02}', 'w') as in_f:
        with open(f'testsA/{i:02}.a', 'w') as out_f:
            print(M, N, q, file=in_f)
            for line in range(M):
                row = [rd.randint(-100, 100) for _ in range(N)]
                print(*row, file=in_f)

                row = [val for val in row if val < 0]
                print(sum(row), len(row), file=out_f)