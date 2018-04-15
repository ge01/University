using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StudentInformation
{
    class StudentInformationApp
    {
        static void Main(string[] args)
        {
            StudentInfo Gabe = new StudentInfo();
            Console.WriteLine("Name: " + Gabe.FirstName + " " + Gabe.LastName);
            Console.ReadKey();
        }
    }
}
