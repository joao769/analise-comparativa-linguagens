import time

def mochila(W, wt, val, n):
    t = [[0 for x in range(W + 1)] for x in range(n + 1)]
    for i in range(n + 1):
        for w in range(W + 1):
            if i == 0 or w == 0: t[i][w] = 0
            elif wt[i-1] <= w: t[i][w] = max(val[i-1] + t[i-1][w-wt[i-1]], t[i-1][w])
            else: t[i][w] = t[i-1][w]
    return t[n][W]

v, p = [60, 100, 120], [10, 20, 30]
s = time.perf_counter(); mochila(50, p, v, 3); e = time.perf_counter()
print(f"Python Mochila: {(e - s) * 1000:.4f} ms")