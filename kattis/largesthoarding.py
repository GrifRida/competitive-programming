# 2021-12-28
n = int(input())
bat = []
for i in range(n):
  bat.append(list(map(int,input().split())))
mx = 0
for i in range(n):
  air = 0
  j = i
  while j < n and bat[j][0] >= bat[i][0]:
    air += bat[j][1]*bat[i][0]
    j += 1
  j = i-1
  while j >= 0 and bat[j][0] >= bat[i][0]:
    air += bat[j][1]*bat[i][0]
    j -= 1
  mx = max(air,mx)
print(mx*50)
