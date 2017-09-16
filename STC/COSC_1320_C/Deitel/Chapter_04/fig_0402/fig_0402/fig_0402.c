// Fig. 4.2: fig_0402.c
// Counter-controlled repetition with the for statement.
#include <stdio.h>

// function main begins program execution
int main(void) 
{
	unsigned int counter; // define counter

	// initialization, repetition condition, and increment
	// are all included in the for statement header.
	for (counter = 1; counter <= 10; ++counter) {
		printf("%u\n", counter);
	} // end for 
} // end function main