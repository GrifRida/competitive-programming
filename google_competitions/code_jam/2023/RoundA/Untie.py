def solve(c):
    n = len(c)
    res = 0
    pos = ['R', 'S', 'P']
    for i in range(n):
        if c[i] == c[(i - 1 + n) % n]:
            tmp = pos.index(c[(i + 1 + n) % n])
            c[i] = pos[(tmp + 1) % 3]
            res += 1
    return res
t = int(input())
for tc in range(t):
    c = list(input())
    n = len(c)
    cc = list(c)
    res1 = solve(cc)
    cc = list(c[1:] + [c[0]])
    res2 = solve(cc)
    print("Case #" + str(tc + 1) + ": " + str(min(res1, res2)))
