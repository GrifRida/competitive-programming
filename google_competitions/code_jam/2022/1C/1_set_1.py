from itertools import permutations
import string
def isok(s):
    alphabet = list(string.ascii_uppercase)
    d = {}
    for c in alphabet:
        d[c] = 0
    d[s[0]] = 1
    for i in range(1,len(s)):
        if s[i] == s[i-1]:
            continue
        if d[s[i]] == 0:
            d[s[i]] = 1
        else:
            return False
    return True

t = int(input())
for tc in range(t):
    print("Case #{}: ".format(tc+1),end='')
    n = int(input())
    ss = input().split()
    res = 'IMPOSSIBLE'
    for i in range(n):
        s = list(ss)
        s[i], s[0] = s[0], s[i]
        j = 1
        while j < n:
            for k in range(j,n):
                if s[j-1][-1] == s[k][0]:
                    s[j], s[k] = s[k], s[j]
                    sss = ''.join(s[0:j+1])
                    if isok(sss):
                        break
                    else:
                        s[j], s[k] = s[k], s[j]
            sss = ''.join(s[0:j+1])
            if isok(sss) == False:
                break
            j += 1
        sss = ''.join(s)
        if isok(sss):
            res = sss
            break

    print(res)
