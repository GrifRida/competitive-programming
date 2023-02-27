t = int(input())
for tc in range(t):
    print("Case #{}: ".format(tc+1),end='')
    n = int(input())
    d = [int(k) for k in input().split()]
    d_actual = min(d[0],d[-1])
    res = 0
    for i in range(n):
        if d[0] >= d[-1]:
            if d[-1] >= d_actual:
                res  += 1
                d_actual = d[-1]
            d = d[:-1]
        else:
            if d[0] >= d_actual:
                res  += 1
                d_actual = d[0]
            d = d[1:]
    print(res)
            
