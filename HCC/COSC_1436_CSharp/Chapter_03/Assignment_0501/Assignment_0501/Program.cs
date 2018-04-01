using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0501
{
    class Program
    {
        static void Main(string[] args)
        {
            double rectangleHeight;
            double rectangleWidth;

            DisplayInstructions();
                       
            GetDimensions(out rectangleHeight, out rectangleWidth);
                        
            double rectangleArea = ComputeArea(rectangleHeight, rectangleWidth);
            double rectanglePerimeter = ComputePerimeter(rectangleHeight, rectangleWidth);

            DisplayResults(rectangleHeight, rectangleWidth, rectangleArea, rectanglePerimeter);
            Console.WriteLine();                     
        }

        public static void DisplayInstructions()
        {
            Console.WriteLine("This program will determine the area and perimeter "
                                + "of a rectangle.");
            Console.WriteLine("You will be asked to enter the Height and Length");
            Console.WriteLine();
        }

        static void GetDimensions(out double height, out double width)
        {
            Console.Write("Enter the height: ");
            height = double.Parse(Console.ReadLine());
            Console.Write("Enter the width: ");
            width = double.Parse(Console.ReadLine());
            Console.WriteLine();
        }

        static double ComputeArea(double height, double width)
        {
            return height * width;
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
