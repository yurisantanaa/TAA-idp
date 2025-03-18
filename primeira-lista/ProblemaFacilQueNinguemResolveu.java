import java.util.Scanner;

public class ProblemaFacilQueNinguemResolveu {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    long n = scanner.nextLong();
    scanner.close();
    calculateCollatzSequence(n);
  }

  public static long nextCollatz(long n) {
    if (n % 2 == 0)
      return n / 2;
    else
      return (n * 3) + 1;
  }

  public static void calculateCollatzSequence(long n) {
    long prox = n;
    System.out.print(n + " ");
    while (prox != 1) {
      prox = nextCollatz(prox);
      System.out.print(prox);
      if (prox != 1)
        System.out.print(" ");
      else
        System.out.println();
    }
  }
}
