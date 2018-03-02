using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0313
{
    class Program
    {
        static void Main(string[] args)
        {
            DisplayInstructions();
        }

        public static void DisplayInstructions()
        {
            Console.WriteLine("This program will determin how "
                                + "much carpet to purchase.");
            Console.WriteLine();
            Console.WriteLine("You will be asked to enter the "
                                + "size of the room and ");
            Console.WriteLine("the price of the carpet, "
                                + "in price per square yards.");
            Console.WriteLine();
        }
    }
}
