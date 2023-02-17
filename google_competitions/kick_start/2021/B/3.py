from math import sqrt
def prime(n):
    k = 2
    while k*k <= n:
        if n%k == 0:
            return False
        k += 1
    return True
t = int(input())
for tc in range(t):
    n = int(input())
    k = int(sqrt(n))
    i = k
    while i>= 0:
        if prime(i):
            break
        i -= 1
    j = i + 1
    while j>=0:
        if prime(j):
            break
        j += 1
    if i*j <= n:
        print("Case #" + str(tc+1) + ": " + str(i*j))
    else:
        j = i - 1
        while j >= 0 :
          if prime(j):
            	break
          j -= 1
        print("Case #" + str(tc+1) + ": " + str(i*j))
