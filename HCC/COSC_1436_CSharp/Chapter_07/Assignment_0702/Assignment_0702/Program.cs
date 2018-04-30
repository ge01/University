using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0702
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] fullName = new string[100];
            string inValue;
            int nameCount = 0;

            Console.Write("-1 to exit, Enter name {0}: ", nameCount + 1);
            inValue = Console.ReadLine();

            while (inValue != "-1")
            {
                fullName[nameCount] = inValue;
                ++nameCount;
                Console.Write("-1 to exit, Enter name {0}: ", nameCount + 1);
                inValue = Console.ReadLine();
            }

            Array.Sort(fullName);
            
            for (int i = 0; i < fullName.Length; i++)
            {
                Console.WriteLine(fullName[i]);
            }

            Console.WriteLine();
        }
    }
}
