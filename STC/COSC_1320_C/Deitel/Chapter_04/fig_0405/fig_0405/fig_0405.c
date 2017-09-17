// Fig. 4.5 fig_0405.c
// Summation with for.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int sum = 0;	// initialize sum
	unsigned int number;	// number to be added to sum

	for (number = 2; number <= 100; number += 2) {
		sum += number; // add number to sum
	} // end for

	printf("Sum is %u\n", sum);	// output sum
} // end function main