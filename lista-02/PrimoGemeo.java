import java.util.Scanner;

public class PrimoGemeo {
  public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      long c = scanner.nextLong();
      for (int i = 0; i < c; i++) {
        long n = scanner.nextLong();
        if(ehPrimo(n) && (ehPrimo(n+2) || ehPrimo(n-2))) System.out.println("O numero "+ n  + " eh um primo gemeo");
        else System.out.println("O numero "+ n  + " nao eh um primo gemeo");
        } 
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
