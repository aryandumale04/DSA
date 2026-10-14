import java.util.*;
public class CharacterCount {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        String input = sc.nextLine();
        HashMap<Character, Integer> mp = new HashMap<>();

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }

        // now need to sort the keys;
        ArrayList<Character> arr = new ArrayList<>(mp.keySet());
        Collections.sort(arr);

        //time to print 
        boolean first = true;
        for (char ch : arr) {
            if(!first) {
                System.out.print(" ");
            }
            System.out.print(""+ch + mp.get(ch));
            first = false;
        }

    }
}
