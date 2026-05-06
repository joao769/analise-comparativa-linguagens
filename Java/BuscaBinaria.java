public class Busca {
    public static int buscaBinaria(int[] arr, int alvo) {
        int baixo = 0, alto = arr.length - 1;
        while (baixo <= alto) {
            int meio = baixo + (alto - baixo) / 2;
            if (arr[meio] == alvo) return meio;
            if (arr[meio] < alvo) baixo = meio + 1;
            else alto = meio - 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] lista = {10, 20, 30, 40, 50};
        System.out.println("Indice: " + buscaBinaria(lista, 30));
    }
}