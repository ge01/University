using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0401
{
    class Program
    {
        static void Main(string[] args)
        {
            int numberOfGradesEntered = 0;
            int gradeValueEntered;
            int sumOfGrades = 0;
            double averageGrade;

            // Display instructions
            Console.WriteLine("Valid entries must be numeric and ");
            Console.WriteLine("in the range 0 through 100");
            Console.WriteLine("");

            do
            {
                Console.Write("Enter grade, -1 to end: ");
                gradeValueEntered = Int32.Parse(Console.ReadLine());

                // Validate the menu selection
                while (gradeValueEntered < -1 || gradeValueEntered > 100)
                {                   
                    Console.WriteLine("Valid entries must be numeric and ");
                    Console.WriteLine("in the range 0 through 100");
                    Console.WriteLine();
                    Console.Write("Enter grade, -1 to end: ");
                    gradeValueEntered = Int32.Parse(Console.ReadLine());                        
                }
                //Process the user's choice
                if (gradeValueEntered != -1)
                {
                    sumOfGrades += gradeValueEntered;
                    numberOfGradesEntered++;
                }
            } while (gradeValueEntered != -1);

            // Calculate average
            averageGrade = sumOfGrades / numberOfGradesEntered;
            Console.WriteLine();
            //Console.WriteLine("Class average is: {0:f2}", averageGrade);

            // Display letter grade
            if (averageGrade >= 90)
                Console.WriteLine("Average grade is an A");
            else if (averageGrade >= 80)
                Console.WriteLine("Average grade is a B");
            else if (averageGrade >= 70)
                Console.WriteLine("Average grade is a C");
            else if (averageGrade >= 60)
                Console.WriteLine("Average grade is a D");
            else
                Console.WriteLine("Average is an F");
        }
    }
}
