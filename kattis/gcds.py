# 	2020-12-19
def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

n = int(input())
a = []
for i in range(n):
    t = int(input())
    if not t in a:
        a.append(t)
res = []
n = len(a)
for i in range(n):
    for j in range(i,n):
        if j == i:
            aux = a[i]
        aux = gcd(aux,a[j])
        res.append(aux)
res = list(set(res))
print(len(res))

