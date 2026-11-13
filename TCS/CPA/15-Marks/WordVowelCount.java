import java.util.*;
public class WordVowelCount {
    static String vowels = "aeiouAEIOU";
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String[] arr = input.split(" ");
        int count = 0;
        for (String word : arr) {
            for (int i = 0; i < word.length() - 1; i++) {
                if (isVowel(word.charAt(i)) && isVowel(word.charAt(i + 1))) {
                    count ++;
                    break;
                }
            }
        }
        System.out.println(count);
    }

    static boolean isVowel(char ch) {
        if (vowels.contains(String.valueOf(ch))) {
            return true;
        } else {
            return false;
        }
    }
}
