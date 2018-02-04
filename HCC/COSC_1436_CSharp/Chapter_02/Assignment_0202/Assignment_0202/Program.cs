using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0202
{
    class Program
    {
        static void Main(string[] args)
        {
            // Declare constant
            const int NUMBER_OF_SCORES = 5;

            // Declare variables
            int examScore1 = 99;
            int examScore2 = 81;
            int examScore3 = 76;
            int examScore4 = 77;
            int examScore5 = 83;
            double averageValue;

            // Calculate average of exams
            averageValue = ((double) (examScore1 + examScore2 +
                            examScore3 + examScore4 + examScore5)) / 
                            NUMBER_OF_SCORES;

            // Display exam scores and exam average
            Console.WriteLine("Exam score 1 is: {0}", examScore1);
            Console.WriteLine("Exam score 2 is: {0}", examScore2);
            Console.WriteLine("Exam score 3 is: {0}", examScore3);
            Console.WriteLine("Exam score 4 is: {0}", examScore4);
            Console.WriteLine("Exam score 5 is: {0}", examScore5);
            Console.WriteLine("The average value of all scores is: {0:F2}", averageValue);

        }
    }
}
