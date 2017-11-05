#include <stdio.h>



							 // function main begins program execution
int main(void)
{
	// initialize array1, array2, array3
	int array1[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } };

	size_t i; // row counter
	size_t j; // column counter

			  // loop through rows
	for (i = 0; i <= 1; ++i) {

		// output column values
		for (j = 0; j <= 2; ++j) {
			printf("%d", array1[i][j]);
		} // end inner for

		printf("\n"); // start new line of output
	}
} // end main

