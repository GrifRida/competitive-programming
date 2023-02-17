    t = int(input())
    for _ in range(t):
    	n = int(input())
    	s = list(input())
    	while len(s) > 1 :
    		if s[0] != s[-1]:
    			s = s[1:-1]
    		else:
    			break
    	print(len(s))
