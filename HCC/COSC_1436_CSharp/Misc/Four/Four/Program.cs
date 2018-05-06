using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Four
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] values = new double[5] { 5.0, 10.0, 15.0, 20.0, 25.0 };
            double max = 4;

            if (values.Length > max)
            {
                for (int count = 0; count < values.Length; count++)
                {
                    Console.WriteLine(count);
                }
            }

            Console.WriteLine();

            const double PI = 3.1416;
            double volume = 0;
            double radius = 5;
            double area;

            // Calculate the area of a sphere
            area = 4 * PI * Math.Pow(radius, 2);

            // Display the area of a sphere
            Console.WriteLine(area);

            Console.WriteLine();

            double number;
            int a = 0, b = 0, c = 0;

            Console.Write("Enter number: ");
            number = double.Parse(Console.ReadLine());

            if (number == 0)
            {
                a--;
            }
            else if (number < 55)
            {
                b--;
            }
            else
            {
                c--;
            }

            Console.WriteLine("a = {0}", a);
            Console.WriteLine("b = {0}", b);
            Console.WriteLine("c = {0}", c);
        }
    }
}
