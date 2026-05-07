#include <stdio.h>
#include <time.h>

int busca(int arr[], int n, int alvo) {
    int b = 0, a = n - 1;
    while (b <= a) {
        int m = b + (a - b) / 2;
        if (arr[m] == alvo) return m;
        if (arr[m] < alvo) b = m + 1; else a = m - 1;
    }
    return -1;
}

int main() {
    int lista[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    clock_t s = clock(); busca(lista, 10, 70); clock_t e = clock();
    printf("C Busca: %.4f ms\n", (double)(e-s)/CLOCKS_PER_SEC*1000);
    return 0;
}