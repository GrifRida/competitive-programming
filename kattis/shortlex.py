# 	2021-12-29
t = int(input())
for tc in range(t):
    n = int(input())
    k, i = 0, 0
    while k <= n:
        k += 2**i
        i = i+1
    res = bin(2**(i-1)-(k-n))[2:]
    print((i-1-len(res))*'0' + res)
