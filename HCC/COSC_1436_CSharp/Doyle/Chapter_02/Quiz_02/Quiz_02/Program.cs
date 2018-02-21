using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quiz_02
{
    class Program
    {
        static void Main(string[] args)
        {
            int ans = 0, v1 = 5, v2 = 8;
            ans = v2 % v1++;

            Console.WriteLine(ans);
        }
    }
}
