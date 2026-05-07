public class Main {
    public static int mochila(int W, int[] wt, int[] val, int n) {
        int[][] t = new int[n + 1][W + 1];
        for (int i = 0; i <= n; i++) {
            for (int w = 0; w <= W; w++) {
                if (i == 0 || w == 0) t[i][w] = 0;
                else if (wt[i - 1] <= w) t[i][w] = Math.max(val[i - 1] + t[i - 1][w - wt[i - 1]], t[i - 1][w]);
                else t[i][w] = t[i - 1][w];
            }
        }
        return t[n][W];
    }
    public static void main(String[] args) {
        int[] v = {60, 100, 120}, p = {10, 20, 30};
        long s = System.nanoTime(); mochila(50, p, v, 3); long e = System.nanoTime();
        System.out.println("Java Mochila: " + (e - s) / 1e6 + " ms");
    }
}