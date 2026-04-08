using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TypeCasting
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // IMPLICIT CASTING 
            //int x = 2;
            //double y = x;
            //Console.WriteLine(x);
            //Console.WriteLine(y);
            //Console.ReadLine();


            //// EXPLICIT CASTING 
            //double x = 3.567;
            //int a = Convert.ToInt32(x);
            //Console.WriteLine(a);
            //Console.ReadLine();


            //// Taking input from user
            //Console.WriteLine("Enter your  Name : ");

            //string name = Console.ReadLine();
            //Console.WriteLine("Hello " + name);

            //Console.WriteLine("How many caandies do you want? ");
            //string can = Console.ReadLine();

            //Console.WriteLine("You will get  : " + (Convert.ToInt32(can) + 4) + " candies [4 extra as a token]");
            //Console.ReadLine();




            //Operators 

            // I. ARITHMETIC OPERATORS

            //int a = 5;
            //int b = 4;
            //Console.WriteLine("a + b = " + (a + b));
            //Console.WriteLine("a - b = " + (a - b));
            //Console.WriteLine("a * b = " + (a * b));
            //Console.WriteLine("a / b = " + (a / b));
            //Console.WriteLine("a % b = " + (a % b));



            //// II. ASSIGNMENT OPERATORS
            //int a = 6;
            //int b = a;
            //Console.WriteLine(b);
            //Console.WriteLine(b += 2);
            //Console.WriteLine(b -= 2);
            //Console.WriteLine(b *= 2);
            //Console.WriteLine(b /= 2);
            //Console.WriteLine(b %= 2);

            //Console.ReadLine();


            //// III. lODICAL OPERATORS
            //bool a = true;
            //bool b = false;
            //Console.WriteLine(a && b);
            //Console.WriteLine(a || b);
            //Console.WriteLine(!a);
            //Console.ReadLine();



            // IV. COMPARISON OPERATORS
            //int a = 4;
            //int b = 10;
            //Console.WriteLine(a > b);
            //Console.WriteLine(a < b);
            //Console.WriteLine(a != b);
            //Console.WriteLine(a <= b);
            //Console.WriteLine(a >= b);
            //Console.WriteLine(a == b);
            //Console.ReadLine();


            //int a = Math.Max(34, 345);
            //int b = Math.Min(34, 345);

            //double c = Math.Sqrt(49);
            //Console.WriteLine(a);
            //Console.WriteLine(b);
            //Console.WriteLine(c);




            //STRINGS 
            //string s1 = "Aryan";
            //Console.WriteLine(s1);
            //Console.WriteLine(s1.Length);
            //Console.WriteLine(s1.ToLower());
            //Console.WriteLine(s1.ToUpper());
            //s1 = s1 + "Ambarsing Dumale";
            //Console.WriteLine(s1);



            //string name  = Console.ReadLine();
            //string candies  = Console.ReadLine();
            //Console.WriteLine($"Your name is {name}. You will get {candies} candies.");

            string s2 = "Hello ji .";
            Console.WriteLine(s2 + "toh kaise hai \" aap log");
            Console.WriteLine(s2 + "toh kaise hai \n aap log");
            Console.WriteLine(s2 + "toh kaise hai \t aap log");
            

            //Console.WriteLine(s2.IndexOf("ji"));
            //string sub = s2.Substring(2);
            //Console.WriteLine(sub);
            Console.WriteLine(s2);
            Console.ReadLine();
        }
    }
}
