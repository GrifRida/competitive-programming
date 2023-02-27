t = int(input())
for tc in range(t):
    n, c = map(int,input().split())
    if c < n-1 or c > (n*(n+1))//2 -1:
        print('Case #' + str(tc+1) + ': ' + 'IMPOSSIBLE')
    else:
      a = []
      for i in range(n):
        a.append(i+1)
      cost = 0
      i = n - 2
      while cost < c and i>=0:
        j = n-1
        while j > i :
          if cost + j + 1 <= c:
            break
          j -= 1
        b = a[i:j+1]
        b.reverse()
        for k in range(i,j+1):
          a[k] = b[k-i]
        cost += j-i+1
        i -= 1
      for i in range(n):
          a[i] = str(a[i])
      print('Case #' + str(tc+1) + ': ', end = '')
      print(' '.join(a))
