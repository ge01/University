using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0303
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Miles per gallon = {0:N2}", CalculateMilesPerGallon(289, 12.2));
        }

        public static double CalculateMilesPerGallon(int milesTraveld, double gallonsUsed)
        {
            return milesTraveld / gallonsUsed;
        }
    }
}
