def palindromic(s):
    l = len(s)
    for i in range(l // 2):
        if s[i] != s[l-i-1]:
            return False
    return True
t = int(input())
for tc in range(t):
    print("Case #{}: ".format(tc+1),end='')
    n = int(input())
    i = 1
    divisors = []
    while i*i <= n:
      if n%i == 0:
        divisors.append(i)
        divisors.append(n//i)
      i += 1
    divisors = list(set(divisors))
    res = 0
    for d in divisors:
        if palindromic(str(d)):
            res += 1
    print(res)
