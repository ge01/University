// 
// September 30, 2017
// This program evaluates the factorials of the integers
// from 1 to 5. It then prints the results in tabular format
// It also prints the sum of the first 5 factorials
#include <stdio.h>

int main(void)
{
	// INITIALIZATION
	int count;
	int factorial = 1;
	int sum = 0;

	// print header
	printf("FACTORIAL\tVALUE\n");
	printf("------------------------\n");

	// PROCESSING
	// calculate first 5 factorials
	for (count = 1; count <= 5; count++) {
		printf("%d!\t\t", count);
		factorial *= count;
		sum += factorial;
		printf("%d\n", factorial);
	}

	// TERMINATION
	printf("\nThe sum of the first 5 factorials is: %d\n\n", sum);
}

// What difficulty might prevent you from calculating the 
// factorial of 20?

// The data type size might prevent the program from accurately 
// calculating the factorial of 20.  Below are the minimum 
// range values of the integer data types.
//
//     Short int -32767 to +32767
//     Long int -2147483647 to +2147483647
//
// The value for 20! might be too large (too many bytes) 
// for the long int data type memory location to hold.
