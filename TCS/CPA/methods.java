import java.util.Scanner;
public class methods {
    // public static int add(int a, int b) {
    //     return a + b;
    // }
    public static boolean isEven(int n) {
        if (n % 2 == 0) return true;
        else return false;
    }
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        // int num1 =  sc.nextInt();
        // int num2 = sc.nextInt();

        // System.out.println(add(num1, num2));
        int num =  sc.nextInt();
        boolean ans = isEven(num);
        System.out.println(ans);
        }
}