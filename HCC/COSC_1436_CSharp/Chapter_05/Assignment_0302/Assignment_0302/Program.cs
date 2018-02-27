/****************************************************************
 * Proramming Assignment 3-2                                    *
 * Developer:                                                   *
 * Date Submitted: February 25                                  *
 * Purpose: Compute the area of a circle, rectangle, and        *
 * cylinder                                                     *
 ***************************************************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0302
{
    class Program
    {
        static void Main(string[] args)
        {
            const Double PI = 3.14159265;

            double areaOfCircle;
            double areaOfRectangle;
            double areaOfCylinder;
            double radius;
            double length;
            double widthSurface;
            double height;
            int menuNumber;

            Console.WriteLine("Enter a number 1-3 to calculate area");
            Console.WriteLine();
            Console.WriteLine("1. Area Of A Circle");
            Console.WriteLine("2. Area Of A Rectangle");
            Console.WriteLine("3. Area Of A Cylinder");
            Console.WriteLine();
            menuNumber = Int32.Parse(Console.ReadLine());
            
            if (menuNumber <= 0 || menuNumber > 3)
                Console.WriteLine("Invalid Number");
            else if (menuNumber == 1)
            {
                Console.Write("Enter the radius of a circle: ");
                radius = Convert.ToDouble(Console.ReadLine());
                areaOfCircle = PI * radius * radius;
                Console.WriteLine("The area of the circle is {0:F2}", areaOfCircle);
            }
            else if (menuNumber == 2)
            {
                Console.Write("Enter the length: ");
                length = Convert.ToDouble(Console.ReadLine());

                Console.Write("Enter the Width Surface: ");
                widthSurface = Convert.ToDouble(Console.ReadLine());

                areaOfRectangle = length * widthSurface;

                Console.WriteLine("The area of the rectangle is {0:F2}", areaOfRectangle);
            }
            else
            {
                Console.Write("Enter the radius of the cylinder: ");
                radius = Convert.ToDouble(Console.ReadLine());

                Console.Write("Enter the hight of the cylinder: ");
                height = Convert.ToDouble(Console.ReadLine());

                areaOfCylinder = (2 * PI * radius * height) + (2 * PI * radius);

                Console.WriteLine("The area of the cylinder is {0:F2}", areaOfCylinder);
            }
            Console.WriteLine();
        }
    }
}
