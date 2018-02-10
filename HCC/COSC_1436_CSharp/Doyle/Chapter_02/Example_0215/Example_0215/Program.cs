using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0215
{
    class Program
    {
        static void Main(string[] args)
        {
            int value1 = 440,
                anotherNumber = 70;
            double value2 = 100.60,
                anotherDouble = 100.999;
            value1 = value2;                // syntax error as shown in Figure 2-14
            value2 = anotherNumber;         // 100.60 cannot be stored in value1
        }
    }
}
