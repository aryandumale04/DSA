// public class test {

//     public static void main (String[] args) 
//     {
//         System.out.println("Hello Duniya");
//     }
// }

public class test  {
    public static void main (String[] args) {
    Student s =  new Student();
    s.name = "Aryan";
    s.display();
    greet();
    test obj =  new test();
    obj.meet();
    }

    static void greet() {
        System.out.println("Kaise hai aaplog?");
    }
    void meet() {
        System.out.println("Fine");
    }

}
class Student {
    String name; 

    void display() {
        System.out.println(name);
    }
}