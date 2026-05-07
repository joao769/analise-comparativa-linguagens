public class Main {
    public static int busca(int[] arr, int alvo) {
        int b = 0, a = arr.length - 1;
        while (b <= a) {
            int m = b + (a - b) / 2;
            if (arr[m] == alvo) return m;
            if (arr[m] < alvo) b = m + 1; else a = m - 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] lista = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        long s = System.nanoTime(); busca(lista, 70); long e = System.nanoTime();
        System.out.println("Java Busca: " + (e - s) / 1e6 + " ms");
    }
}