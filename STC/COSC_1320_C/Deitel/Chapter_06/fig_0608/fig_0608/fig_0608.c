// Fig. 6.8: fig_0608.c
// Displaying a histogram.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void)
{
	// use initializer list to initialize array n
	int n[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	size_t i; // outer for counter for array elements
	int j; // inner for counter counts *s in each histogram bar

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	// for each element of array n, output a bar of the histogram
	for (i = 0; i < SIZE; ++i) {
		printf("%7u%13d       ", i, n[i]);

		for (j = 1; j <= n[i]; ++j) { // print one bar
			printf("%c", '*');
		} // end inner for

		puts(""); // end a histogram bar
	} // end outer for
} // end main