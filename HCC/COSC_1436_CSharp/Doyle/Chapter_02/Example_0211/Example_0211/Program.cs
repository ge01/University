using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example_0211
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 100;
            Console.WriteLine(num++);       // Displays 100
            Console.WriteLine(num);         // Displays 101 after the post
                                            // increment is performed on the 
                                            // previos line
            Console.WriteLine(++num);       // Displays 102
        }
    }
}
