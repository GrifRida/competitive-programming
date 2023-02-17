    from math import pi
    t = int(input())
    p = str(31415926535897932384626433832795028841971)
    for _ in range(t):
    	n = input()
    	res = 0
    	for i in range(len(n)):
    		if n[i] == p[i]:
    			res += 1
    			continue
    		break
    	print(res)
