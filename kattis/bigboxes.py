# 2021-01-02
n, k = list(map(int,input().split()))
a = list(map(int,input().split()))
res = -1
l, r = 0, 1000000000
while(l<=r):
    m = l + (r-l)//2
    tot, box = 0, 1
    e = True
    for i in range(n):
        if a[i] > m:
            l = m+1
            e = False
            break
        else:
            if tot + a[i] <= m :
                tot += a[i]
            else:
                tot = a[i]
                box += 1
    if box <= k and e == True:
        res = m
        r = m-1
    else:
        l = m+1
print(res)
