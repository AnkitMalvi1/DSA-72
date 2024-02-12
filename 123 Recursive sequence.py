M = 10 ** 9 + 7

MAX = 1000 * (1000 + 1) // 2

f = [1] * (MAX + 1)
rf = [1] * (MAX + 1)

for i in range(1, MAX + 1):
    f[i] = i * f[i - 1]
    f[i] %= M
    
rf[MAX] = pow(f[MAX], M - 2, M)

for i in range(MAX - 1, -1, -1):
    rf[i] = (i + 1) * rf[i + 1]
    rf[i] %= M

class Solution:
    def sequence(self, n):
        res = 0
        i = 1
        l = 1
        for _ in range(n):
            res += f[i + l - 1] * rf[i - 1]
            res %= M
            i += l
            l += 1
        return res
