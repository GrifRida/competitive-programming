from math import pi
t = int(input())
for _ in range(t):
	n = int(input())
	p = []
	for i in range(n):
		p.append(list(map(int,input().split())))
	res = []
	for i in range(n - 1):
		if i == 0:
			tmp = p[0][i]
			if tmp != p[1][i]:
				tmp = p[2][i]
			res.append(tmp)
			for j in range(n):
				if p[j][i] != tmp:
					tmp = p[j][i]
					break
			res.append(tmp)
		else:
			for j in range(n):
				if p[j][i] != tmp:
					tmp = p[j][i]
					break
			res.append(tmp)
	for c in res:
		print(c, end=' ')
	print()	
