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
            string[] months = new string[12] { "January", "February", "March", "April",
                "May", "June", "July", "August", "September",
                "October", "November", "December"};
            double[] rainFall = new double [12];
            double total = 0.0;

            for (int i = 0; i < rainFall.Length; i++)
            {
                Console.Write("Please enter rainfall in feet for month {0}: ", i + 1);
                rainFall[i] = Convert.ToDouble(Console.ReadLine());
                total += rainFall[i];
            }

            for (int j = 0; j < months.Length; j++)
            {
                Console.WriteLine("The rainfall for {0} = {1}", months, rainFall);
            }

            Console.WriteLine("The average rainfall for the year is {0:D2} feet", (total / 12));
        }
    }
}
