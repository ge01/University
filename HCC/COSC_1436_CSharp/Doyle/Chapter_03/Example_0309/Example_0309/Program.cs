/**************************************
 * AgeIncrementer.cs
 * Displays age one year from now.
 *************************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0309
{
    class Program
    {
        static void Main(string[] args)
        {
            int age;
            string aValue;

            Console.Write("Enter your are: ");
            aValue = Console.ReadLine();
            age = int.Parse(aValue);
            Console.WriteLine("Your age next year"
                        + " will be {0}", ++age);
            Console.Read();
        }
    }
}
