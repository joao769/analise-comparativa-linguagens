public class Fibonacci {
    public static long fibI(int n) {
        long a = 0, b = 1, t;
        for (int i = 0; i < n; i++) { t = a + b; a = b; b = t; }
        return a;
    }
    public static long fibR(int n) {
        if (n <= 1) return n;
        return fibR(n - 1) + fibR(n - 2);
    }
    public static void main(String[] args) {
        int n = 30;
        long s = System.nanoTime(); fibI(n); long e = System.nanoTime();
        System.out.println("Java Iterativo: " + (e - s) / 1e6 + " ms");
        s = System.nanoTime(); fibR(n); e = System.nanoTime();
        System.out.println("Java Recursivo: " + (e - s) / 1e6 + " ms");
    }
}