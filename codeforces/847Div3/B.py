    from math import pi
    t = int(input())
    for _ in range(t):
    	n, s, r = map(int,input().split())
    	nn = n - 1
    	a = r // (n - 1)
    	b = r % (n - 1)
    	res = [s - r]
    	for i in range(n - 1):
    		if i < b:
    			res.append(a + 1)
    		else:
    			res.append(a)
    	for c in res:
    		print(c, end=' ')
    	print()

