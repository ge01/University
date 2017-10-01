//
// September 30, 2017
// This program calculates and prints the sum of the 
// multiple of 5's integers from 5 to 100.
#include <stdio.h>

int main(void)
{
	// INITIALIZATION
	int sumNum = 0;
	int count;

	// header
	printf("%s", "This program sums the displayed ");
	printf("%s", "integers from 5 to 100. \n\n");

	// PROCESSING
	// calculate sum of the multiples of 5's integers
	// from 5 to 100
	for (count = 5; count <= 100; count += 5) {
		sumNum += count;
		printf("%d ", count);
	}

	// TERMINATION
	printf("\n\n");
	printf("The sum of the displayed integers is ");
	printf("%d.", sumNum);
	printf("\n\n");
}