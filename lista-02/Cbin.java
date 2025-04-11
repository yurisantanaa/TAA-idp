
import java.util.Scanner;

public class Cbin {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String n  = scanner.next();
    String bin = decToBin(n);
    String binrev = new StringBuilder(bin).reverse().toString();
    long c = scanner.nextLong();
    for (int i = 0; i < c; i++) {
      int consulta = scanner.nextInt();
      char ans = binrev.charAt(consulta);
      if (ans == '1') System.out.println("acesa");
      else System.out.println("apagada");
    }

      
  }

  public static String decToBin(String n){
    return Long.toBinaryString(Long.parseLong(n));
  }

}
