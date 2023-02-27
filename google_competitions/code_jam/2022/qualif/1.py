t = int(input())
for tc in range(t):
    print('Case #' + str(tc+1) + ':')
    r, c = map(int, input().split())
    print('..+' + '-+'*(c-1))
    print('.' + '.|'*c)
    for i in range(2*r - 1):
        if i%2 == 0:
            print('+' + '-+'*c)
        else:
            print('|' + '.|'*c)
