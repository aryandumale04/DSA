import java.util.*;
public class RemoveDuplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<Character> seen = new HashSet<>();
        StringBuilder result =  new StringBuilder();
        String input = sc.nextLine();
        for (int i = 0; i < input.length(); i++) {
            char c = input.charAt(i);
            if(!seen.contains(c)) {
                result.append(c);
                seen.add(c);

            } 
        }
        System.out.println(result);

    }
}
