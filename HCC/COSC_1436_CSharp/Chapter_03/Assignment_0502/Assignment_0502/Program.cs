using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0502
{
    class Program
    {
        static void Main(string[] args)
        {
            double tempFahrenheit;
            double tempCelsius;

            DisplayInstructions();

            GetDimensions(out tempFahrenheit, out tempCelsius);

            double tempInCelsius = ComputeTemperature(tempFahrenheit, tempCelsius);
            double rectanglePerimeter = ComputePerimeter(tempFahrenheit, tempCelsius);

            DisplayResults(tempFahrenheit, tempCelsius, tempInCelsius, rectanglePerimeter);
            Console.WriteLine();
        }

         public static void DisplayInstructions()
        {
            Console.WriteLine("This program will determine the area and perimeter "
                                + "of a rectangle.");
            Console.WriteLine("You will be asked to enter the Height and Length");
            Console.WriteLine();
        }

        static void GetDimensions(out double fahrenheit, out double celsius)
        {
            Console.Write("Enter the height: ");
            fahrenheit = double.Parse(Console.ReadLine());
            Console.Write("Enter the width: ");
            celsius = double.Parse(Console.ReadLine());
            Console.WriteLine();
        }

        static double ComputeTemperature(double height, double width)
        {
            return (height - 32.0) * (5.0 / 9.0);
        }

        static double ComputePerimeter(double height, double width)
        {
            return (height + width) * 2.0;
        }

        static void DisplayResults(double height, double width, double area, double perimeter)
        {
            Console.WriteLine("Rectangle Values");
            Console.WriteLine("Height: {0:F2}", height);
            Console.WriteLine("Width: {0:F2}", width);
            Console.WriteLine("Area: {0:F2}", area);
            Console.WriteLine("Perimeter: {0:F2}", perimeter);
        }
    }
}
