using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleClasses
{
    class Program
    {
        static void Main(string[] args)
        {
            // Instance of the Car class
            // Also called an object
            Car myNewCar = new Car();

            // Each of the properties of the Car class
            // Instance property Make is set to the value "Oldsmobile"
            myNewCar.Make = "Oldsmobile";
            myNewCar.Model = "Cutlas Supreme";
            myNewCar.Year = 1986;
            myNewCar.Color = "Silver";

            //Console.WriteLine("{0} - {1} - {2}", myNewCar.Make, myNewCar.Model, myNewCar.Color);

            //determineMarketValue(myNewCar);     

            double myValue = myNewCar.DeterminMarketValue();
        }

        // Helper Method
        //private static double determineMarketValue(Car car)
        //{
        //    return 100.0;
        //}
    }

    class Car
    {
        // Specific Instances of the Car class
        // Data types but a little more complex
        public string Make { get; set; }
        public string Model { get; set; }
        public int Year { get; set; }
        public string Color { get; set; }

        public double DeterminMarketValue()
        {
            return 0.0;
        }

    }
}
