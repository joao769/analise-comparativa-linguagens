#include <stdio.h>

long fibonacci_iterativo(int n) {
    long a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return a;
}

int fibonacci_recursivo(int n) {
    if (n <= 1) return n;
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}

int main() {
    int n = 10;
    printf("Fibonacci Iterativo: %ld\n", fibonacci_iterativo(n));
    printf("Fibonacci Recursivo: %d\n", fibonacci_recursivo(n));
    return 0;
}