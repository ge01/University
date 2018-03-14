using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0306
{
    class Program
    {
        static void Main(string[] args)
        {
            int aNumber;
            Console.WriteLine("Enter a single character: ");
            aNumber = Console.Read();

            // The value of the character entered: 97
            Console.WriteLine("The value of the character entered: "
                                + aNumber);
            Console.WriteLine();

            // Example 3-7
            // Cast The Value
            // The value of the character entered: a
            Console.WriteLine("The value of the character entered: "
                                + (char) aNumber);

            // Example 3-8
            // The single statement in Example 3-8 could replace all four 
            // lines from Examples 3-6 and 3-7.

            // Console.WriteLine("The value of the character entered: "
            //                    + (char) Console.Read());

        }
    }
}
