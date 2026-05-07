#include <stdio.h>
#include <time.h>

long long fib_iterativo(int n) {
    long long a = 0, b = 1, proximo;
    for (int i = 0; i < n; i++) {
        proximo = a + b; a = b; b = proximo;
    }
    return a;
}

long long fib_recursivo(int n) {
    if (n <= 1) return n;
    return fib_recursivo(n - 1) + fib_recursivo(n - 2);
}

int main() {
    int n = 30; clock_t s, e;
    s = clock(); fib_iterativo(n); e = clock();
    printf("C Iterativo: %.4f ms\n", (double)(e-s)/CLOCKS_PER_SEC*1000);
    s = clock(); fib_recursivo(n); e = clock();
    printf("C Recursivo: %.4f ms\n", (double)(e-s)/CLOCKS_PER_SEC*1000);
    return 0;
}