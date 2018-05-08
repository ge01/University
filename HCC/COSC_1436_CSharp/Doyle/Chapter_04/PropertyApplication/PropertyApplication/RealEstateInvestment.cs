/* This class defines a template for a real estate 
 * object to include instance data members,
 * public properties, constructors, and a method to 
 * determine the monthly earnings.
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PropertyApplication
{
    class RealEstateInvestment
    {
        private string streetAddress;
        private int yearBuilt;
        private double purchasePrice;
        private double monthlyExpense;
        private double incomeFromRent;

        // Read-only property
        public double YearBuilt
        {
            get
            {
                return yearBuilt;
            }
        }
        // Read-only property
        public string StreetAddress
        {
            get
            {
                return streetAddress;
            }
        }
        // Read-only property
        public double PurchasePrice
        {
            get
            {
                return purchasePrice;
            }
        }
        // Property acting as mutator and accessor
        public double MonthlyExpense
        {
            set
            {
                monthlyExpense = value;
            }
            get
            {
                return monthlyExpense;
            }
        }
        // Property acting as mutator and accessor
        public double IncomeFromRent
        {
            set
            {
                incomeFromRent = value;
            }
            get
            {
                return incomeFromRent;
            }
        }
        // Default constructor
        public RealEstateInvestment()
        {
        }
        // Three parameter constructor
        public RealEstateInvestment (int year, double price, string address)
        {
            yearBuilt = year;
            purchasePrice = price;
            streetAddress = address;
        }
        // Returns the earning for a given month
        public double DetermineMonthlyEarnings()
        {
            return incomeFromRent - monthlyExpense;
        }
    }
}
