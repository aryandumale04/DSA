using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Loops
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //int age = 16;
            //if (age > 18)
            //{
            //    Console.WriteLine("You can drive.");
            //}
            //else {
            //    Console.WriteLine("You cannot drive");
            //};
            Console.Write("Enter your age : ");
            string ageStr = Console.ReadLine();
            int age = Convert.ToInt32(ageStr);
            if (age < 2)
            {
                Console.WriteLine("You were just born.");
            }
            else if (age < 10)
            {
                Console.WriteLine("Please complete your school first.");

            }
            else if (age < 18)
            {
                Console.WriteLine("Bas thoda intezar aur ");

            }
            else {
                Console.WriteLine("Ja simmran ja ,jee le apni zindagi");

            };
            Console.ReadLine();
        }
    }
}
