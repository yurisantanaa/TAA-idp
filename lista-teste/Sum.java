import java.util.Scanner;

public class Sum {
  public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      int n = scanner.nextInt();
      for (int i = 0; i < n; i++) {
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println(a + b);
      }
  }
}
