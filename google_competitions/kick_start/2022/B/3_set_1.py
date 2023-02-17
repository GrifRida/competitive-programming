
t = int(input())
for tc in range(t):
    print("Case #{}: ".format(tc+1),end='')
    n, d = [int(k) for k in input().split()]
    v = [int(k) for k in input().split()]
    if sum(v) == 0:
        print('0')
        continue
    l = 0
    r =  n-1
    while v[l] == 0:
        l += 1
    while v[r] == 0:
        r -= 1
    if l == n:
        print('0')
        continue
    aux = [1]
    res = 0
    value = 1
    while l <= r:
        if v[l] != value:
            aux.append(v[l])
            value = v[l]
        l += 1
    res = (len(aux) + 1) // 2
    print(res)
