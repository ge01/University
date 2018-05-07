using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Carpet
{
    class CarpetCalculator
    {
        private double pricePerSqYard;
        private double noOfSqYards;

        // Property of the pricePerSqYard data field
        public double PricePerSqYard
        {
            get
            {
                return pricePerSqYard;
            }
            set
            {
                pricePerSqYard = value;
            }
        }

        // Default constructor
        public CarpetCalculator()
        {
            // empty body
        }

        // One argument constructor
        public CarpetCalculator(double price)
        {
            PricePerSqYard = price;
        }

        // Two argument constructor
        public CarpetCalculator(double amountNeeded, double price)
        {
            noOfSqYards = amountNeeded;
            pricePerSqYard = price;
        }

        public double DetermineTotalCost()
        {
            return (pricePerSqYard * noOfSqYards);
        }

        // One of the overloaded mutator methods
        public void SetNoOfSqYards(double length, double width)
        {
            const int SQ_FT_PER_SQ_YARD = 9;
            noOfSqYards = length * width / SQ_FT_PER_SQ_YARD;
        }

        // One of the overloaded mutator methods
        public void SetNoOfSqYards(double squareYards)
        {
            noOfSqYards = squareYards;
        }

        // Accessor method
        public double GetNoOfSqYards()
        {
            return noOfSqYards;
        }
        public override string ToString()
        {
            return "Price Per Square Yard: " +
                pricePerSqYard.ToString("C") +
                "\nTotal square Yards: " +
                noOfSqYards.ToString("F1") +
                "\nTotal Price: " +
                DetermineTotalCost().ToString("C");
        }
    }
}
