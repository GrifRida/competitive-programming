# 	2022-01-01
import math 
aux = [-1 for i in range(100)]
primes = []
for i in range(100):
    if aux[i] == -1:
        primes.append(i+2)
        j = 2
        while (i+2)*j - 2 < 100:
            aux[(i+2)*j - 2] = 1
            j += 1
t = int(input())
for tc in range(t):
    n = int(input())
    res = [5]
    p = 5
    for i in range(1,n):
        j = 1
        while math.log10(p*primes[j]) <= i+1:
            j += 1
        res.append(primes[j-1])
        p *= primes[j-1]
    for i in range(n):
        res[i] = str(res[i])
    print(' '.join(res))
