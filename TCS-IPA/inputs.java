import java.util.Scanner;


public class inputs {
    public static void main (String[] args) {
        Scanner sc =  new Scanner(System.in);

        //test case 01 :
//         Write a Java program using Scanner to read these five inputs, then print each value on a separate line.
// Input:
// 25
// 9876543210
// 89.75
// true
// A

        // int n = sc.nextInt();
        // long n2 = sc.nextLong();
        // double n3 = sc.nextDouble();
        // boolean n4 = sc.nextBoolean();
        // char n5 = sc.next().charAt(0);


        // // printing : 
        // System.out.println(n);
        // System.out.println(n2);
        // System.out.println(n3);
        // System.out.println(n4);
        // System.out.println(n5);



//         Test Case 2 — Multiple numbers on the same line or different lines
// Your task: Write a Java program using Scanner that reads five integers and prints their sum.
// Your program must work with either of these input formats.
// Input A — all on the same line
// 10 20 30 40 50


// Input B — on different lines
// 10
// 20
// 30
// 40
// 50


// // Expected output for both:

//         int sum = 0; 
//         for (int i = 0; i  < 5; i++) {
//             sum += sc.nextInt();
//         }
//         System.out.println (sum);

// Test Case 3 — next() vs. nextLine()
// Your task: Write a Java program that reads the following two lines of input:
// Cox and Kings
// Travel Agency


// Your program must:
// 1. Read the first word of the first line and store it in word.
// 2. Read the entire second line, including its space, and store it in line.
// 3. Print word on the first output line and line on the second output line.

        // String word = sc.next();
        // sc.nextLine();
        // String line = sc.nextLine();

        // System.out.println(word);

        // System.out.println(line);



//         Test Case 5 — Leading spaces, trailing spaces, and trim()
// Your task: Read one complete line that may contain leading and trailing spaces, then print the cleaned string.
// Input (the · characters below represent spaces; don't type the dots literally):
// ···Hello Java··


// Expected output:
// Hello Java

        // String line = sc.nextLine().trim();
        // System.out.println(line);


        // testcase 06 : 10 20 30 40 50 as string 
    //     int sum = 0;
    //     String line =  sc.nextLine();
    //     String [] parts = line.trim().split("\\s+");
    //     for (int i = 0 ; i < parts.length; i++) {
    //         sum += Integer.parseInt(parts[i]);
    //     }
    //     System.out.println(sum);
    // }

// Test Case 7 — Arrays and repeated input records
// Let's practise a pattern you'll commonly encounter in IPA: reading a count first, then reading that many values into an array.
// Your task
// Write a Java program that:
// 1. Reads an integer n, representing the number of elements.
// 2. Reads n integers into an array.
// 3. Prints the elements in reverse order, separated by spaces.
// Example input
// 5
// 10 20 30 40 50


// Expected output
// 50 40 30 20 10


        // int arrSize = sc.nextInt();
        // int[] arr = new int[arrSize];
        // for (int i = 0; i < arrSize; i++) {
        //     arr[i] = sc.nextInt();
        // }

        // int index = arrSize - 1; 
        // while (index >= 0) {
        //     System.out.print(arr[index] + " ");
        //     index --;
        // }


//         Test Case 8 — Output formatting for IPA
// This is our final case. You'll practise printing values in the exact format required by a coding assessment.
// Your task
// Read the following inputs:
// Aryan Dumale
// 45000
// 89.756


// Print the output in this exact format:
// Name: Aryan Dumale
// Salary: 45000
// Score: 89.76 

String name = sc.nextLine();
int n = sc.nextInt();
double n2 = sc.nextDouble();

System.out.println("Name:" + " " + name);
System.out.println("Salary:" + " " + n);
System.out.printf("Score: %.2f%n", n2);
    }


}