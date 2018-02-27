/****************************************************************
 * Proramming Assignment 3-1                                    *
 * Developer: Gabriel Escobedo                                  *
 * Date Submitted: February 25                                  *
 * Purpose: Convert the decimal value between 1 and 10 and      *
 * display its equivalent Roman numeral value                   *
 ***************************************************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0301
{
    class Program
    {
        static void Main(string[] args)
        {
            int numberValue;
            string romanNumeral;
            
            Console.WriteLine("Please enter a number between 1 and 10: ");
            numberValue = Int32.Parse(Console.ReadLine());

            romanNumeral = ConvertToRoman(numberValue);

            Console.WriteLine("{0} = {1}", numberValue, romanNumeral);
        }

        public static string ConvertToRoman(int value)
        {
            string result;

            if (value <= 0 || value > 10)
                result = "Invalid Number";
            else if (value == 1)
                result = "I";
            else if (value == 2)
                result = "II";
            else if (value == 3)
                result = "III";
            else if (value == 4)
                result = "IV";
            else if (value == 5)
                result = "V";
            else if (value == 6)
                result = "VI";
            else if (value == 7)
                result = "VII";
            else if (value == 8)
                result = "VIII";
            else if (value == 9)
                result = "IX";
            else
                result = "X";

            return result;
        }       
    }
}
