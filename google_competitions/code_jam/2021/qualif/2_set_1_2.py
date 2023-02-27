t = int(input())
for tc in range(t):
    l = list(input().split())
    x , y = int(l[0]), int(l[1])
    s = l[2]
    n = len(s)
    s = list(s)
    cost = 0
    i = 0
    while i<n:
        if s[i] == '?':
            j = i+1
            while j < n and s[j] == '?':
                j += 1
            if i == 0 or j == n:
                if j < n:
                    for k in range(i,j):
                        s[k] = s[j]
                elif i > 0:
                    for k in range(i,j):
                        s[k] = s[i-1]
                else:
                    for k in range(i,j):
                        s[k] = 'J'
            else:
                for k in range(i,j):
                    s[k] = s[j]
        i += 1
    for i in range(1,n):
        if s[i] + s[i-1] == 'JC':
            cost += x
        elif s[i] + s[i-1] == 'CJ':
            cost += y
            
    print('Case #' + str(tc+1) + ': ' + str(cost))
            
