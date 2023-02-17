tc = int(input())
for tt in range(tc):
    d, n, k = map(int,input().split())
    a = []
    for i in range(n):
        a.append(list(map(int,input().split())))
    days = []
    for i in range(d):
      days.append([])
    for i in range(n):
        for j in range(a[i][1]-1,a[i][2]):
            days[j].append(a[i][0])
    mx = 0
    for i in range(d):
        if len(days[i]) <= k:
            if mx < sum(days[i]):
                mx = sum(days[i])
        else:
            days[i].sort()
            days[i].reverse()
            if mx < sum(days[i][:k]):
                mx = sum(days[i][:k])
    print('Case #' + str(tt+1) + ': ',end = '')
    print(mx)
