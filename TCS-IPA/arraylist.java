import java.util.Scanner;
import java.util.ArrayList;

public class arraylist {
    public static void main(String[] args) {
        ArrayList<Integer> arr1 = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        int size = sc.nextInt();

        for (int i = 0; i < size; i++) {
            arr1.add(sc.nextInt());
        }

        int listSize = arr1.size();
        int sum = 0;
        for (int i = 0; i < listSize; i++) {
            sum += arr1.get(i);
        }
        System.out.println(sum);

    }
}
