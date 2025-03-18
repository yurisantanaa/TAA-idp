import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class NrAbandonado {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    List<Long> jaForam = new ArrayList<>();
    long c = 0;
    do{
       long sum = 0;
      c = scanner.nextLong();
      for (int i = 0; i < c; i++) {
        long n = scanner.nextLong();
        if(jaForam.contains(n)){
          sum -= n;
          jaForam.remove(n);
        }
        else{
          sum += n;
          jaForam.add(n);
        }
      }
      if (c != -1) System.out.println(sum);
    } while (c != -1);
  }
}
