#include <stdio.h>



							 // function main begins program execution
int main(void)
{
	// initialize array1, array2, array3
	int array1[5][3] = { { 1, 10, 100 },{ 2, 20, 200 },{ 3, 30, 300 },
	                     { 4, 40, 400 },{ 5, 50, 500 } };

	size_t i; // row counter
	size_t j; // column counter

			  // loop through rows
	for (i = 0; i < 5; ++i) {

		// output column values
		for (j = 0; j < 3; ++j) {
			printf("%d ", array1[i][j]);
		} // end inner for

		printf("\n"); // start new line of output
	}
} // end main

