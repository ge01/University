// 
// 
#include <stdio.h>
#define PRODUCT 3
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
	{ { 77, 68, 86, 73 },
	{ 96, 87, 89, 78 },
	{ 70, 90, 86, 81 } };

	// output array productCost
	puts("The array is: ");
	printArray(productCost, PRODUCT, SALESPERSON);
	puts("");

	// calculate the total cost for each product
	for (product = 0; product < PRODUCT; ++product) {
		printf("The total for product %u is %.2f\n",
			product, total(productCost[product], SALESPERSON));
	} // end for
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
	printf("%s", "                 [0]  [1]  [2]  [3]");

	// output costs in tabular format
	for (i = 0; i < item; ++i) {

		// output label for row
		printf("\nProduct[%d] ", i);

		// output cost for one product
		for (j = 0; j < agent; ++j) {
			printf("%-5d", costs[i][j]);
		} // end inner for
	} // end outer for
} // end function printArray