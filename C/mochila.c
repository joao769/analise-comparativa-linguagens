#include <stdio.h>
#include <time.h>

int max(int a, int b) { return (a > b) ? a : b; }
int mochila(int W, int wt[], int val[], int n) {
    int t[n + 1][W + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) t[i][w] = 0;
            else if (wt[i-1] <= w) t[i][w] = max(val[i-1] + t[i-1][w-wt[i-1]], t[i-1][w]);
            else t[i][w] = t[i-1][w];
        }
    }
    return t[n][W];
}

int main() {
    int v[] = {60, 100, 120}, p[] = {10, 20, 30};
    clock_t s = clock(); mochila(50, p, v, 3); clock_t e = clock();
    printf("C Mochila: %.4f ms\n", (double)(e-s)/CLOCKS_PER_SEC*1000);
    return 0;
}