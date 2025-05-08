import java.util.Scanner;

public class DivisivelPorTres {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int D = scanner.nextInt();

            if (D == -1) {
                break;
            }

            String N = scanner.next();

            int soma = 0;
            for (int i = 0; i < N.length(); i++) {
                soma += Character.getNumericValue(N.charAt(i));
            }
            if (soma % 3 == 0) {
                System.out.println(soma + " sim");
            } else {
                System.out.println(soma + " nao");
            }
        }

        scanner.close();
    }
}