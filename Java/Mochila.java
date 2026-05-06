public class Mochila {
    public static int resolverMochila(int W, int[] wt, int[] val, int n) {
        int[][] tabela = new int[n + 1][W + 1];
        for (int i = 0; i <= n; i++) {
            for (int w = 0; w <= W; w++) {
                if (i == 0 || w == 0) tabela[i][w] = 0;
                else if (wt[i - 1] <= w)
                    tabela[i][w] = Math.max(val[i - 1] + tabela[i - 1][w - wt[i - 1]], tabela[i - 1][w]);
                else tabela[i][w] = tabela[i - 1][w];
            }
        }
        return tabela[n][W];
    }

    public static void main(String[] args) {
        int[] val = {60, 100, 120}, wt = {10, 20, 30};
        System.out.println("Maximo: " + resolverMochila(50, wt, val, 3));
    }
}