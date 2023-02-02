# 2022-08-08
n, p = map(int,input().split())
a = list(map(int,input().split()))
for i in range(n):
    a[i] -= p
dp = [a[0]]
for i in range(1,n):
    dp.append(max(a[i], dp[i-1]+a[i]))
print(max(dp))

