import java.util.*;
public class SumOfPrimeDigits {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = Math.abs(sc.nextInt());
        int sumOfPrime = 0;
        int number =  n;
        while (number > 0) {
            int digit = number % 10;
            boolean prime = isPrime(digit);
            if (prime) {
                sumOfPrime += digit;
            }

            number = number / 10;
        }

        System.out.println(sumOfPrime);
    }

    // static method 
    static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        else if (n == 2) {
            return true;
        } else {
            for (int i = 2 ; i*i <= n; i++) {
                if (n % i == 0) {
                    return false;
                }
            }
        }

        return true;
    }
}
