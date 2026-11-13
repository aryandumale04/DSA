import java.util.*;
public class IntegerPalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = Math.abs(sc.nextInt());
        long reverseNumber = 0;
        int n2= n;
        while (n2 > 0) {
            int digit =  n2 % 10;
            reverseNumber = reverseNumber * 10 + digit;
            n2 = n2 / 10;
        }

        if (n == reverseNumber) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }
}
