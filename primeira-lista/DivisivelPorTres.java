import java.util.Scanner;

public class DivisivelPorTres {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            // Lê o número de dígitos
            int D = scanner.nextInt();

            // Condição de parada
            if (D == -1) {
                break;
            }

            // Lê o número como uma string
            String N = scanner.next();

            // Calcula a soma dos dígitos
            int soma = 0;
            for (int i = 0; i < N.length(); i++) {
                soma += Character.getNumericValue(N.charAt(i));
            }

            // Verifica se a soma é divisível por 3
            if (soma % 3 == 0) {
                System.out.println(soma + " sim");
            } else {
                System.out.println(soma + " nao");
            }
        }

        scanner.close();
    }
}