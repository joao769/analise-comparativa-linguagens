def busca_binaria(arr, alvo):
    baixo, alto = 0, len(arr) - 1
    while baixo <= alto:
        meio = (baixo + alto) // 2
        if arr[meio] == alvo: return meio
        if arr[meio] < alvo: baixo = meio + 1
        else: alto = meio - 1
    return -1

lista = [10, 20, 30, 40, 50]
print(f"Indice: {busca_binaria(lista, 30)}")