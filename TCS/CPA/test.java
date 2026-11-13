// // // public class test {

// // //     public static void main (String[] args) 
// // //     {
// // //         System.out.println("Hello Duniya");
// // //     }
// // // }

// // // public class test  {
// // //     public static void main (String[] args) {
// // //     Student s =  new Student();
// // //     s.name = "Aryan";
// // //     s.display();
// // //     greet();
// // //     test obj =  new test();
// // //     obj.meet();
// // //     }

// // //     static void greet() {
// // //         System.out.println("Kaise hai aaplog?");
// // //     }
// // //     void meet() {
// // //         System.out.println("Fine");
// // //     }

// // // }
// // // class Student {
// // //     String name; 

// // //     void display() {
// // //         System.out.println(name);
// // //     }
// // // }

// // import java.util.Scanner;
// // public class test {

// //     public static void main (String[] args) {
// //         Scanner sc =  new Scanner(System.in);
// //         System.out.print("Enter the size of array :  ");
// //         int size =  sc.nextInt();
// //         String [] arr =  new String[size];
// //         System.out.print("Enter the elements of array : ");

// //         for (int i = 0; i < size; i++) {
// //             String s =  sc.next();
// //             arr[i] = s;
// //         }

// //         System.out.print("The array consists of : ");
// //         for (int i = 0; i < size; i++) {
// //         System.out.print(arr[i] + " ");
// //         }


// //     }

// // }


// public class test {

//     int n ;
//     String name;

//     test(int n, String z) {
//         this.n = n;
//         this.name = z;
//         System.out.printf("Hello %s,you are %d", name , n);
//     }
//     public static void main (String[] args) {
//         test t1 = new test(12, "Aryan");
//     } 

// }


public class test {
    public static void main (String[] args) {
        // using getter
        test2 obj1 = new test2(); 
        int age = obj1.getAge();
        System.out.println("Age :  " + age);

        //using setters 
        obj1.setAge(25);
        System.out.println("New age : "+ obj1.getAge());
    }
}

class test2 {
    private int age = 20;

    public int getAge() {
        return this.age;
    }
    public void setAge(int x) {
        this.age = x;
    }
}