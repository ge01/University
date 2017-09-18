// Fig. 4.9: fig_0409.c
// Using the do...while repetition statement.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int counter = 1; // initialize counter

	do {
		printf("%u ", counter); // display counter
	} while (++counter <= 10); // end do...while
} // end function main