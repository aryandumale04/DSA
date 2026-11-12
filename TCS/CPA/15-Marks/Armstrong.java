import java.util.*;
public class Armstrong {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        if (n < 0) {
            System.out.println(false);
            return;
        }

        if (n == 0) {

            System.out.println(true);
            return;
        }

        long sum = 0;
        long n2 = n;
        long numberOfDigits = 0;
        while (n2 > 0) {
            n2 = n2 / 10;
            numberOfDigits++;
        }
        n2 = n;
        while (n2 > 0) {
            long digit = n2 % 10;
            sum += Math.pow(digit, numberOfDigits);
            n2 = n2 / 10;
        }
        
        if (sum == n) {
            System.out.println(true);
        } else {
            System.out.println(false);
        }
    }
}
