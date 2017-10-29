// Fig. 6.4: fig_0604.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// use initializer list to initialize arra n
	int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
	size_t i; // counter

	printf("%s%13s\n", "Element", "Value");

	// output contents of array in tabular format
	for (i = 0; i < 10; ++i) {
		printf("%7u%13d\n", i, n[i]);
	} // end for	
} // end main