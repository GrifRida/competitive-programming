    t = int(input())
    for _ in range(t):
    	n = int(input())
    	s = input()
    	x, y = 0, 0
    	out = "NO"
    	for i in range(n):
    		if s[i] == 'U':
    			y += 1
    		elif s[i] == 'D':
    			y -= 1
    		elif s[i] == 'R':
    			x += 1
    		else:
    			x -= 1
    		if x == 1 and y == 1:
    			out = "YES"
    			break
    	print(out)

