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
            double[] values = new double[5] { 5.0, 10.0, 15.0, 20.0, 25.0};
            double max = 4;

            if (values.Length > max)
            {
                for (int count = 0; count < values.Length; count++)
                {
                    Console.WriteLine(count);
                }
            }


        }
    }
}
