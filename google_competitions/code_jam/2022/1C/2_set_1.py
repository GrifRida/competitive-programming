from itertools import permutations

t = int(input())
for tc in range(t):
    print("Case #{}: ".format(tc+1),end='')
    n, k = [int(k) for k in input().split()]
    e = [int(k) for k in input().split()]
    ee = [c**2 for c in e]
    sum_e = sum(e)
    sum_ee = sum(ee)
    if sum_e == 0:
        if sum_ee > 0:
            res = 'IMPOSSIBLE'
        else:
            res = 0
    elif (sum_ee - sum_e*sum_e)%(2*sum_e) == 0:
        res = (sum_ee - sum_e*sum_e) // (2*sum_e)
    else:
        res = 'IMPOSSIBLE'
    
    print(res)
