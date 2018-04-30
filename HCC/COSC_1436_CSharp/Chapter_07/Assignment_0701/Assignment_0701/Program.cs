using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0701
{
    class Program
    {
        static void Main(string[] args)
        {
            int total = 0;
            double avg;
            double distance;
            string inValue;
            int[] rainfallValue = new int[12];
            string[] month = new string[12] { "Jan", "Feb", "Mar", "Apr",
                "May", "Jun", "Jul", "Aug", "Sep",
                "Oct", "Nov", "Dec"};

            // Values are entered
            for (int i = 0; i < rainfallValue.Length; i++)
            {
                Console.Write("Enter Rainfall integer in inches for month {0}: ", i + 1);
                inValue = Console.ReadLine();
                rainfallValue[i] = Convert.ToInt32(inValue);
            }

            // Values are summed.
            for (int i = 0; i < rainfallValue.Length; i++)
            {
                total += rainfallValue[i];
            }

            avg = total / rainfallValue.Length;
            Console.WriteLine();
            Console.WriteLine("Month\tInches\tDist. from Avg.");
            for (int i = 0; i < rainfallValue.Length; i++)
            {
                distance = Math.Abs((avg - rainfallValue[i]));
                Console.WriteLine("{0}\t{1}\t{2}", month[i], rainfallValue[i], distance);
            }
            Console.WriteLine();
            Console.WriteLine("The average rainfall for the year is {0} inches.", avg);
        }
    }
}
