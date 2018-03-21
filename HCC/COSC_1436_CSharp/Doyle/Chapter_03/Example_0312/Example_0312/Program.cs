using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0312
{
    class Program
    {
        static void Main(string[] args)
        {
            int aValue = 200;
            int bValue = 896;
            int result;
            result = Math.Max(aValue, bValue);
            // result = 896
            result += bValue *
                        Math.Max(aValue, bValue) - aValue;
            // result = 896 + (896 * 896 - 200)
            // result = 8053512
            Console.WriteLine("Largest value between {0} "
                    + "and {1} is {2}", aValue, bValue,
                    Math.Max(aValue, bValue));
        }
    }
}
