import java.util.*;
public class Soldier {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();


        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }

        int rem =  n;
        int index = 0;
        if (n == 1) {
            System.out.println("NONE");
            System.out.println(1);
            return;
        }
        while (rem > 1) {
            index =  (index + (k - 1)) % rem;
            System.out.print(arr[index] + " ");

            // left shift 
            for (int i =  index; i < rem - 1; i++) {
                arr[i] = arr[i + 1];
            }

            rem --;
            //edge case is last element removed
            if(index == rem) {
                index  = 0;
            }
        }
        System.out.println();
        System.out.println(arr[0]);
        
    }
}
