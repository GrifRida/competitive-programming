t = int(input())
for _ in range(t):
	n = int(input())
	a = list(map(int, input().split()))
	done = False
	for i in range(n - 1):
		if a[i] == -1 and a[i + 1] == -1:
			a[i] = 1
			a[i + 1] = 1
			done = True
			break
	if not done:
		for i in range(n - 1):
			if a[i] * a[i + 1] == -1:
				a[i] *= -1
				a[i + 1] *= -1
				done = True
				break
	if not done:
		a[0] = -1
		a[1] = -1
	print(sum(a))
