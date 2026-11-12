import java.util.Scanner;
public class demo {
    public static void main(String[] args) {
        Scanner sc  =  new Scanner(System.in);

        System.out.println("Enter your Roll Number : ");
        int rollNumber =  sc.nextInt();
        sc.nextLine();

        System.out.println("Enter your Name : ");
        String name = sc.nextLine();

        System.out.println("Enter your CGPA : ");
        float cgpa = sc.nextFloat();

        System.out.println("Enter your Division : ");
        char division = sc.next().charAt(0);

        System.out.println("Hello : " + name);
    }
}