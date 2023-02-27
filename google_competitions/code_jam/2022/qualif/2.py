t = int(input())
for tc in range(t):
    print('Case #' + str(tc+1) + ': ',end='')
    a = [list(map(int,input().split())) for i in range(3)]
    mini = [min([a[i][j] for i in range(3)]) for j in range(4)]
    maxi = [max([a[i][j] for i in range(3)]) for j in range(4)]
    summ = 10**6
    if sum(mini) < summ:
        print('IMPOSSIBLE')
        continue
    diff = sum(mini) - summ
    for i in range(4):
        if diff > mini[i]:
            diff -= mini[i]
            mini[i] = 0
        else:
            mini[i] -= diff
            diff = 0
    print(' '.join([str(mini[i]) for i in range(4)]))
        
