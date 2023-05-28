# Данная программа запускает основную программу на всех тестовых файлах
# типа B и проверяет результат работы. Вердикт записывается в файл ResultA.txt

import os

#os.system("g++ Lab-1.cpp -o B.exe")

tc = 20
f = open("ResoultB.txt", 'w')
for i in range(1, tc + 1):
    os.system(f"Prog.exe < \"testsB/{i:02}\" > out.txt")
    fout = open("out.txt")
    fcorrect = open(f"testsB/{i:02}.a")
    flag = True
    for L1, L2 in zip(fout, fcorrect):
        if L1 != L2:
            flag = False
            break
    fout.close()
    fcorrect.close()
    if flag:
        print(f"{i:02}: OK", file=f)
    else:
        print(f"{i:02}: WrongAnswer", file=f)
        exit(0)
    
    os.remove("out.txt")