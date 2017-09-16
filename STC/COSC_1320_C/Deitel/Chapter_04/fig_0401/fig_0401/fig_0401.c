// Fig. 4.1: fig_0401.c
// Counter-controlled repetition.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int counter = 1;	// initialization

	while (counter <= 10) { // repetition condition
		printf("%u\n", counter); // display counter
		++counter; // increment
	} // end while
} // end function main