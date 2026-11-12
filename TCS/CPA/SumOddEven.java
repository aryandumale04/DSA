import java.util.*;
public class SumOddEven {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        int EvenSum = 0;
        int OddSum = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] % 2 == 0) {
                //even so
                EvenSum ++;
            } else {
                OddSum ++;
            }
        }

        System.out.println("Even count: "+ EvenSum);
        System.out.println("Odd count: "+ OddSum);


    }
}
