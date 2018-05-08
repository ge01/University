using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StudentInforamtion
{
    class StudentApp
    {
        static void Main(string[] args)
        {
            StudentInfo student1 = new StudentInfo("S12375896", "Gardanelli", 
                                                   "Escondido", "Sophmore",
                                                   "Computer Engineering");

            student1.StudentTuition = GetTuition();
            string sN = student1.StudentNumber;
            string sC = student1.StudentClassification;
            string sM = student1.StudentMajor;

            Console.WriteLine();
            Console.WriteLine("Student Number: " + sN);
            Console.WriteLine("Students Full Name: " + student1.FirstAndLast());            
            Console.WriteLine("Student Number: " + sC);
            Console.WriteLine("Student Number: " + sM);
            Console.WriteLine("Total Cost: {0:C}", student1.StudentTuition);
            Console.WriteLine();
        }

        public static double GetTuition()
        {
            double cost;
            double taxes = 0.08;
            string inValue;

            Console.Write("Student Tuition: ");
            inValue = Console.ReadLine();
            cost = double.Parse(inValue);

            return (cost * taxes + cost);
        }
    }
}
