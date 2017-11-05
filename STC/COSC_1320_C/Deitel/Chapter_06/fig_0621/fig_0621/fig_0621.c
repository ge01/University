// Fig. 6.21: fig_0621.c
// Initializing multidimensional arrays.
#include <stdio.h>

void printArray(int a[][3]); // function prototype

// function main begins program execution
int main(void)
{
	// initialize array1, array2, array3
	int array1[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } };
	int array2[2][3] = { 1, 2, 3, 4, 5 };
	int array3[2][3] = { { 1, 2 },{ 4 } };

	puts("Values in array1 by row are:");
	printArray(array1);

	puts("Values in array2 by row are:");
	printArray(array2);
	
	puts("Values in array3 by row are:");
	printArray(array3);	
} // end main

// function to output array with two rows and three columns
void printArray(int a[][3])
{
	size_t i; // row counter
	size_t j; // column counter

	// loop through rows
	for (i = 0; i <= 1; ++i) {
		
		// output column values
		for (j = 0; j <= 2; ++j) {
			printf("%d", a[i][j]);
		} // end inner for

		printf("\n"); // start new line of output
	} // end outer for
} // end function printArray

//OUTPUT
//Values in array1 by row are :
//123
//456
//Values in array2 by row are :
//123
//450
//Values in array3 by row are :
//120
//400