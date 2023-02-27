t = int(input())
for tc in range(t):
    print('Case #' + str(tc+1) + ': ',end='')
    n = int(input())
    d = list(map(int,input().split()))
    d.sort()
    l = 0
    ss = 1
    for i in range(n):
        if ss <= d[i]:
            ss += 1
            l += 1
    print(l)
        
