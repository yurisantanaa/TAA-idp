import java.util.Scanner;

public class Primo {
  public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      int n = scanner.nextInt();
      for (int i = 0; i < n; i++) {
        Long v = scanner.nextLong();
        if(ehPrimo(v)) System.out.println("o numero " + v + " eh primo");
        else System.out.println("o numero " + v + " nao eh primo");
      }
      scanner.close();
  }

  public static boolean ehPrimo(long n){
    if (n == 2) return true;
    if (n < 2) return  false;
    if(n%2 == 0) return false;
    for (int i = 3; i <= Math.sqrt(n); i+=2) {
      if(n%i == 0) return false;
    }
    return true;
  }
}
