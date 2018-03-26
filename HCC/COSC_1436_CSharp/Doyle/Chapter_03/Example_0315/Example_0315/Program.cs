using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0315
{
    class Program
    {
        static void Main(string[] args)
        {
            GetLength();
        }

        public static double GetLength()
        {
            string inputValue;
            int feet,
                inches;

            Console.Write("Enter the Length in feet: ");
            inputValue = Console.ReadLine();
            feet = int.Parse(inputValue);
            Console.Write("Enter the Length in inches: ");
            inputValue = Console.ReadLine();
            inches = int.Parse(inputValue);
            return (feet + (double)inches / 12);
        }
    }
}
