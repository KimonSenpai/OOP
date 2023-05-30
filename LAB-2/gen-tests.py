# Данная программа генерирует тестовые файлы типа A.

import random as rd
import os



tc = 10

if not os.path.isdir("tests"):
    os.mkdir("tests")

for i in range(1, tc + 1):
    with open(f'tests/{i:02}', 'w') as in_f:
        with open(f'tests/{i:02}.a', 'w') as out_f:
            M, N = (rd.randint(1, 20) for _ in range(2))
            while True:
                commands = [1] + [rd.randint(1, 3) for i in range(5*i)] + [0]
                if 2 in commands and 3 in commands:
                    break
            print(M, N, file=in_f)
            
            for com in commands:
                if com == 0:
                    print(com, file=in_f)
                    continue
                if com == 1:
                    print(com, file=in_f)
                    matr = []
                    for line in range(M):
                        row = [rd.randint(-100, 100) for _ in range(N)]
                        print(*row, file=in_f)
                        matr.append(row)
                    continue

                q = rd.randint(min(min(row) for row in matr) + 1, 
                               max(max(row) for row in matr) + 1)
                if com == 2:
                    print(com, q, file=in_f)
                    for row in matr:
                        nrow = [val for val in row if val < q]
                        print(sum(nrow), len(nrow), file=out_f)
                if com == 3:
                    print(com, q, file=in_f)
                    filtered = [val for r in matr for val in r if val < q]
                    print(sum(filtered), len(filtered), file=out_f)
