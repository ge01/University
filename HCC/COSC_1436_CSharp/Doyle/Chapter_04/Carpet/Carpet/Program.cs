/*
 * This class instantiates an object 
 * of the CarpetCalculator class. It
 * demonstrates how to access and use
 * the members of the class.
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Carpet
{
    class CarpetCalculatorApp
    {
        static void Main(string[] args)
        {
            CarpetCalculator berber = new CarpetCalculator(17.95);

            double roomWidth;
            double roomLength;

            DisplayInstructions();

            // Call GetDimension() to get the length
            roomLength = GetDimension("Length");

            // Call GetDimension() again to get the width
            roomWidth = GetDimension("Width");
            berber.SetNoOfSqYards(roomLength, roomWidth);
            berber.PricePerSqYard = 25.99;
            Console.Clear();
            Console.Write(berber);
            Console.ReadLine();
        }
        static void DisplayInstructions()
        {
            Console.WriteLine("This program will"
                                + "determine how much "
                                + "carpet to purchase.");
            Console.WriteLine();
            Console.WriteLine("You will be asked to "
                                + "enter the size of the "
                                + "room and the price of the");
            Console.WriteLine("carpet, in price per"
                                + "square yds.");
            Console.WriteLine();
        }
        static double GetDimension(string side)
        {
            string inputValue;  // local variables
            int feet,           // needed only by this 
                inches;         // method

            Console.Write("Enter the {0} in feet: ",
                            side);
            inputValue = Console.ReadLine();
            feet = int.Parse(inputValue);
            Console.Write("Enter the {0} in inches: ", side);
            inputValue = Console.ReadLine();
            inches = int.Parse(inputValue);

            // Note: cast required to avoid int division
            return (feet + (double)inches / 12);
        }
    }
}
