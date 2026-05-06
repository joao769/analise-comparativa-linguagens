public class Fibonacci {
    public static long fibIterativo(int n) {
        long a = 0, b = 1, temp;
        for (int i = 0; i < n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return a;
    }

    public static int fibRecursivo(int n) {
        if (n <= 1) return n;
        return fibRecursivo(n - 1) + fibRecursivo(n - 2);
    }

    public static void main(String[] args) {
        int n = 10;
        System.out.println("Iterativo: " + fibIterativo(n));
        System.out.println("Recursivo: " + fibRecursivo(n));
    }
}