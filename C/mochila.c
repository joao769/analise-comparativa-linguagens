#include <stdio.h>

int maximo(int a, int b) { return (a > b) ? a : b; }

int mochila(int W, int pesos[], int valores[], int n) {
    int tabela[n + 1][W + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) tabela[i][w] = 0;
            else if (pesos[i - 1] <= w)
                tabela[i][w] = maximo(valores[i - 1] + tabela[i - 1][w - pesos[i - 1]], tabela[i - 1][w]);
            else tabela[i][w] = tabela[i - 1][w];
        }
    }
    return tabela[n][W];
}

int main() {
    int val[] = {60, 100, 120}, wt[] = {10, 20, 30};
    printf("Valor maximo: %d\n", mochila(50, wt, val, 3));
    return 0;
}