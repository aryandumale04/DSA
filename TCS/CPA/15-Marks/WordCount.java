import java.util.*;
public class WordCount {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        String sentence = sc.nextLine().trim();
        String word = sc.next().trim();
        int count = 0;
        String[] arr = sentence.split("\\s+");
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].equals(word)) {
                count ++;
            }
        }
        System.out.println(count);
    }
}
