//
// September 24, 2017
// This program has two parts.
// Part 1 - reads a nonnegative integer and computes and prints its factorial.
// Part 2 - estimates the value of the mathematical constant e (euler's number).
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// DECLARATION AND INITIALIZATION I
	int n = 5;					// holds a nonnegative integer
	int count = 1;				// counter variable for while loops
	int factorial = 1;			// holds factorial value
	float eulersNumber;			// estimated value for euler's number (e)

	// PROCESSING I	
	while (count <= n)			// loop n times, n set at INITIALIZATION I
	{
		factorial *= count;						// compute factorial
		++count;								// increment counter
	}

	// TERMINATION I
	printf("This part of the program reads a nonnegative integer, computes, \n");
	printf("and prints its factorial.\n\n");
	printf("\t For example, 5! = 5*4*3*2*1, which is %d \n\n", factorial);	// display result
	
	// INITIALIZATION II
	n = 10;
	count = 1;
	factorial = 1;
	
	// PROCESSING II
	while (count <= n)			// loop n times, n set at INITIALIZATION II
	{
		factorial *= count;							// compute factorial

		if (count == 1) {							// estimate euler's number
			eulersNumber = (1.0 / factorial) + 1;	// 1 + 1/1! +...
		}
		else										// ...+ 1/10!
		{
			eulersNumber += (1.0 / factorial);
		}
		
		++count;									// increment counter
	}

	// TERMINATION II
	printf("This part of the program estimates the value of the mathematical \n");
	printf("constant e by using the fromula: \n\n");
	printf("\t e = 1 + 1/1! + 1/2! + 1/3! +...1/10! = ");
	printf("%.5f\n\n", eulersNumber);				// display result
}