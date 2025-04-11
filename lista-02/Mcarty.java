import java.util.Scanner;

public class Mcarty {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    long c = scanner.nextLong();
    for (int i = 0; i < c; i++) {
      long n = scanner.nextLong();
      long ans = CalculaMcCarthy(n);
      System.out.println(ans);
    }
  }

  private static long CalculaMcCarthy(long n) {
    if (n > 100) {
      return n - 10;
    } else if (n <= 100) {
      return CalculaMcCarthy(CalculaMcCarthy(n + 11));
    }
    return 0;
  }

}
