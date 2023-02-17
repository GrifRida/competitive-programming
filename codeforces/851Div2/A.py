    t = int(input())
    for _ in range(t):
    	n = int(input())
    	a = list(map(int, input().split()))
    	right = [a[0]]
    	for i in range(n - 1):
    		right.append(right[i] * a[i + 1])
    	left = [right[n - 1] // (a[0])]
    	for i in range(n - 1):
    		left.append(left[i] // a[i + 1])
    	out = -1
    	for i in range(n - 1):
    		if left[i] == right[i]:
    			out = i + 1
    			break
    	print(out)
