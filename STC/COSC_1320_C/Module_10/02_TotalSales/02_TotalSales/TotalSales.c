// 
// 
#include <stdio.h>
#define PRODUCT 5
#define SALESPERSON 4

// function prototypes
double total(const int setOfCost[], size_t person);
void printArray(int costs[][SALESPERSON], size_t item, size_t agent);

// function main begins program execution
int main(void)
{
	size_t product; // product counter

					// initialize product cost for three products (rows)
	int productCost[PRODUCT][SALESPERSON] =
	{ { 10, 15, 20, 22 },
	{ 11, 44, 55, 74 },
	{ 55, 43, 28, 28 },
	{ 77, 68, 19, 78 },
	{ 81, 19, 15, 85 } };

	// output array productCost
	puts("SP = Salesperson  \n");
	printArray(productCost, PRODUCT, SALESPERSON);
	puts("");

	// calculate the total cost for each product
	for (product = 0; product < PRODUCT; ++product) {
		printf("The total for product %u is $%.2f\n",
			product, total(productCost[product], SALESPERSON));
	} // end for
	puts("");
} // end main

  // Determine the total for each product
double total(const int setOfCost[], size_t person)
{
	size_t i; // cost counter
	int total = 0; // sum of product cost

				   // total cost for one product
	for (i = 0; i < person; ++i) {
		total += setOfCost[i];
	} // end for

	return total; // total
} // end function average

  // Print the array
void printArray(int costs[][SALESPERSON], size_t item, size_t agent)
{
	size_t i; // product counter
	size_t j; // agent counter

			  // output column heads
	printf("%s", "           SP[1]  SP[2]  SP[3]  SP[4]");

	// output costs in tabular format
	for (i = 0; i < item; ++i) {

		// output label for row
		printf("\nProduct[%d]", i);

		// output cost for one product
		for (j = 0; j < agent; ++j) {
			printf("%6d", costs[i][j]);
		} // end inner for
	} // end outer for
	puts("");
} // end function printArray