// Fig. 6.15: fig_0615.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void)
{
	// initialize a
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass; // passes counter
	size_t i; // comparisons counter
	int hold; // temporary location used to swap array elements

	puts("Data items in original order");

	// output original array
	for (i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	} // end for

	// bubble sort
	// loop to control number of passes
	for (pass = 1; pass < SIZE; ++pass) {

		// loop to control number of comparisons per pass
		for (i = 0; i < SIZE - 1; ++i) {

			// compare adjacent elements and swap them if first
			// element is greater than second element
			if (a[i] > a[i + 1]) {
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			} // end if
		} // end inner for
	} // end outer for

	puts("\nData items in ascending order");

	// output sorted array
	for (i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	} // end for

	puts("");
} // end main