import java.util.*;
public class Input {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);

        String inp = sc.nextLine().trim();
        String [] parts = inp.split(",",2);
        System.out.println(parts[0]);
        System.out.println(parts[1]);
    }
}
