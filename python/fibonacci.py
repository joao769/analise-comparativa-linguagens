import time

def fib_i(n):
    a, b = 0, 1
    for _ in range(n): a, b = b, a + b
    return a

def fib_r(n):
    if n <= 1: return n
    return fib_r(n - 1) + fib_r(n - 2)

n = 30
s = time.perf_counter(); fib_i(n); e = time.perf_counter()
print(f"Python Iterativo: {(e - s) * 1000:.4f} ms")
s = time.perf_counter(); fib_r(n); e = time.perf_counter()
print(f"Python Recursivo: {(e - s) * 1000:.4f} ms")