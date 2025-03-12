import java.util.Scanner;

public class NrFaltante {
  public static void main(String[] args) {
    Scanner scanner =  new Scanner(System.in);
    int n = scanner.nextInt();
    int sum = 0;
    int sum2 = n;
    for (int i = 1; i < n; i++) {
      sum += scanner.nextInt();
      sum2 += i;
    }
    System.out.println(sum2 - sum);
    }
  }

