using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0402
{
    class Program
    {
        static void Main(string[] args)
        {
            int floorValue = 100000;
            int ceilingValue = 0;
            int numberOfEvans = 0;
            int numberOfOdds = 0;
            int holdARandomNumber;

            Random randomNumber = new Random(DateTime.Now.Millisecond);

            // Genarate 1000 random numbers between 0 and 100000
            for (int count = 0; count < 1000; count++)
            {
                holdARandomNumber = Math.Abs(randomNumber.Next(100000));
                //Console.Write("{0} ", holdARandomNumber);

                // Count number of evan and odd numbers
                if (holdARandomNumber % 2 == 0)
                    numberOfEvans++;
                else
                    numberOfOdds++;

                // Find the smallest and largest number
                if (holdARandomNumber > ceilingValue)
                    ceilingValue = holdARandomNumber;
                if (holdARandomNumber < floorValue)
                    floorValue = holdARandomNumber;
            }

            // Display calculations
            Console.WriteLine("Quantity of even numbers is: {0}", numberOfEvans);
            Console.WriteLine("Quantity of odd numbers is: {0}", numberOfOdds);
            Console.WriteLine("The largest number is: {0}", ceilingValue);
            Console.WriteLine("The smallest number is: {0}", floorValue);
        }
    }
}
