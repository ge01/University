/*********************************************
 * SquareInput.cs
 * Allows an integer value to be input.
 * Computes and displays the square of the 
 * value inputted.
 *********************************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0310
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputStringValue;
            double aValue;
            double result;

            Console.Write("Enter a value to be "
                            + "squared: ");
            inputStringValue = Console.ReadLine();
            aValue = double.Parse(inputStringValue);
            result = Math.Pow(aValue, 2);
            Console.WriteLine("{0} squared is {1}",
                                aValue, result); 
        }
    }
}
