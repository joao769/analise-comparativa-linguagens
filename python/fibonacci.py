def fibonacci_iterativo(n):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, a + b
    return a

def fibonacci_recursivo(n):
    if n <= 1:
        return n
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2)

print(f"Iterativo: {fibonacci_iterativo(10)}")
print(f"Recursivo: {fibonacci_recursivo(10)}")