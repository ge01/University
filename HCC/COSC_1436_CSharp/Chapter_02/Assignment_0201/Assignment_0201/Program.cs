/****************************************************************
 * Proramming Assignment 2-1                                    *
 * Developer:                                                   *
 * Date Submitted: February 11                                  *
 * Purpose: Enter the amount of a purchase, calculate taxes,    *
 *          totals.                                             *
 ***************************************************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_0201
{
    class Program
    {
        static void Main(string[] args)
        {
            const double STATE_SALES_TAX = .04;
            const double COUNTY_SALES_TAX = .02;

            double purchaseAmount;
            double stateTax;
            double countyTax;
            double totalTax;
            double totalSale;

            Console.Write("Enter the amount of a purchase: ");
            purchaseAmount = Convert.ToDouble(Console.ReadLine());

            // Calculate various taxes and sales
            stateTax = purchaseAmount * STATE_SALES_TAX;
            countyTax = purchaseAmount * COUNTY_SALES_TAX;
            totalTax = stateTax + countyTax;
            totalSale = purchaseAmount + totalTax;

            // Display all sales tax
            Console.WriteLine();
            Console.WriteLine("The amount of the purchase is: {0:C}", purchaseAmount);
            Console.WriteLine("The state sales tax is: {0:C}", stateTax);
            Console.WriteLine("The county sales tax is: {0:C}", countyTax);
            Console.WriteLine("The total sales tax is: {0:C}", totalTax);
            Console.WriteLine("The total of the sale is: {0:C}", totalSale);
            Console.WriteLine();
        }
    }
}
