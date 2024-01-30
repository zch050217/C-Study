import java.util.Scanner;

public class Main {
    import java.util.Scanner;
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            int testCases = scanner.nextInt();
            
            while (testCases-- > 0) {
                int dividend = scanner.nextInt();
                int divisor = scanner.nextInt();
                
                if (dividend % divisor == 0) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }