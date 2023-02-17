from math import pi
t = int(input())
for tc in range(t):
    print("Case #{}: ".format(tc+1),end='')
    r, a, b = [int(k) for k in input().split()]
    area = pi*r*r + pi*(r*a)*(r*a) + pi*((r*a) // b)*((r*a) // b)
    r = r = (r*a) // b
    while  r > 0:
        area += pi*(r*a)*(r*a) + pi*((r*a) // b)*((r*a) // b)
        r = (r*a) // b
    print(area)
