#  2021-09-11
n = int(input())
a = []
for i in range(n):
    a.append(input()[::-1])
a =list(set(a))
a.sort()
n = len(a)
res = 0
for i in range(n-1):
    k = 0
    if len(a[i]) < len(a[i+1]):
      if a[i+1][:len(a[i])] == a[i]:
        k = -1
    if k != -1:
      while k < min(len(a[i]),len(a[i+1])) and a[i][k] == a[i+1][k]:
        k += 1
    if k > res:
      res = k
print(res)
