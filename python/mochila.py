def mochila(W, pesos, valores, n):
    tabela = [[0 for x in range(W + 1)] for x in range(n + 1)]
    for i in range(n + 1):
        for w in range(W + 1):
            if i == 0 or w == 0:
                tabela[i][w] = 0
            elif pesos[i-1] <= w:
                tabela[i][w] = max(valores[i-1] + tabela[i-1][w-pesos[i-1]], tabela[i-1][w])
            else:
                tabela[i][w] = tabela[i-1][w]
    return tabela[n][W]

val, wt = [60, 100, 120], [10, 20, 30]
print(f"Maximo: {mochila(50, wt, val, 3)}")