import java.util.Scanner;

public class BODH {
  public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      while(true){
        String n = scanner.next();
        int b = scanner.nextInt();
        if(b == -1 || n.equals("-1")) break;
        switch (b) {
            case 2:
              System.out.println(decToBin(n));  
              break;
            case 8:
              System.out.println(decToOct(n));
              break;
            case 10:
              System.out.println(n);
              break;
            case 16:
              System.out.println(decToHex(n));
              break;
        }
      }
      scanner.close();
  }

  public static String decToBin(String n){
    return Long.toBinaryString(Long.parseLong(n));
  }

  public static String decToOct(String n){
    return Long.toOctalString(Long.parseLong(n));
  }

  public static String decToHex(String n){
    return Long.toHexString(Long.parseLong(n)).toUpperCase();
  }
}
