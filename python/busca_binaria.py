import time

def busca(arr, alvo):
    b, a = 0, len(arr) - 1
    while b <= a:
        m = (b + a) // 2
        if arr[m] == alvo: return m
        if arr[m] < alvo: b = m + 1
        else: a = m - 1
    return -1

lista = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
s = time.perf_counter(); busca(lista, 70); e = time.perf_counter()
print(f"Python Busca: {(e - s) * 1000:.4f} ms")