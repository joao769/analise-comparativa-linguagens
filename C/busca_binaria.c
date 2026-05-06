#include <stdio.h>

int busca_binaria(int arr[], int n, int alvo) {
    int baixo = 0, alto = n - 1;
    while (baixo <= alto) {
        int meio = baixo + (alto - baixo) / 2;
        if (arr[meio] == alvo) return meio;
        if (arr[meio] < alvo) baixo = meio + 1;
        else alto = meio - 1;
    }
    return -1;
}

int main() {
    int lista[] = {10, 20, 30, 40, 50};
    int res = busca_binaria(lista, 5, 30);
    printf("Indice encontrado: %d\n", res);
    return 0;
}