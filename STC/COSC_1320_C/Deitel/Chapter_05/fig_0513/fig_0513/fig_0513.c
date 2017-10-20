// Fig. 5.13: fig_0513
// Randomizing the die-rolling program.
#include <stdlib.h>
#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int i; // counter
	unsigned int seed; // number used to seed the random number generator

	printf("%s", "Enter seed: ");
	scanf("%u", &seed); // note %u for unsigned int

	srand(seed); // seed the random number generator

	// loop 10 times
	for (i = 1; i <= 10; i++) {

		// pick a random number from 1 to 5 and output it
		printf("%10d", 1 + (rand() % 6));

		// if counter is divisible by 5, begin a new line of output
		if (i % 5 == 0) {
			puts("");
		} // end if
	} // end for
} // end main