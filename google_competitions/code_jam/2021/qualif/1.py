t = int(input())
for tc in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    res = 0
    for i in range(n-1):
        mn = 1000
        imn = -1
        for j in range(i,n):
            if a[j] < mn:
                mn = a[j]
                imn = j
        b = a[i:imn+1]
        b.reverse()
        res += len(b)
        for k in range(len(b)):
            a[i+k] = b[k]
    print('Case #' + str(tc+1) + ': ' + str(res))
