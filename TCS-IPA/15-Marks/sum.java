import java.util.Scanner;
public class sum {
    public static void main (String[] args) {
    Scanner sc =  new Scanner(System.in);
    
    
    int n = sc.nextInt();
    long number;
    if (n == Integer.MIN_VALUE) {
         number =  Math.abs((long) n);
    } else {
         number =  Math.abs(n);
    }
    
    int sum = 0;
    while (number > 0) {
        long digit = number % 10;
        sum += digit;
        number = number / 10; 
    }

    if (sum % 3 == 0) {
        System.out.println(true);
    } else {
        System.out.println("False");
    }
sc.close();
    }
    
}