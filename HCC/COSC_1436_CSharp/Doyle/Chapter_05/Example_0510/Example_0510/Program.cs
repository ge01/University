using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0510
{
    class Program
    {
        static void Main(string[] args)
        {
            if (hoursWorked > 40)
            {
                payAmount = (hoursWorked - 40) * payRate * 1.5 + payRate * 40;
                Console.WriteLine("You worked {0} hours overtime.",
                                    hoursWorked - 40);
            }
            else
                payAmount = hoursWorked * payRate;
            Console.WriteLine("I am displayed, whether the expression "
                                + "evalutes true or false");
        }
    }
}
