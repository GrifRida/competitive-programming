    t = int(input())
    for _ in range(t):
    	n = int(input())
    	s = list(input())
    	res = 0
    	occ = {}
    	left = []
    	max_tmp = 0
    	for c in s:
    		if c in occ:
    			occ[c] += 1
    		else:
    			occ[c] = 1
    			max_tmp += 1
    		left.append(max_tmp)
    	
    	right = []
    	min_tmp = left[n - 1]
    	for c in s:
    		if occ[c] > 0:
    			occ[c] -= 1
    			if occ[c] == 0:
    				min_tmp -= 1
    		right.append(min_tmp)
    	for i in range(n - 1):
    		res = max(res, left[i] + right[i])
     
     
    	print(res)
