# 2021-09-19
n = int(input())
a = []
for i in range(n+1):
    if i < 1:
        a.append(1)
    else:
        a.append((2*i*(2*i-1)*a[i-1])//(i**2))
res = 0
for i in range(n+1):
    res += (a[i]*a[n-i])//((i+1)*(n-i+1))
print(res)
