import java.util.Scanner;

public class arrays {
    public static int add(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }
    public static void main(String[] args) {

        Scanner sc =  new Scanner(System.in);
        int size = sc.nextInt();

        int[] arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        for (int nums : arr) {
            System.out.print(nums + " ");
        }

        System.out.println(add(arr));
    }
}