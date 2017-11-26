// Fig. 7.15: fig_0715.c
// Putting values into an array, sorting the values into
// ascending order and printing the resulting array.
#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, size_t size); // prototype

int main(void)
{
	// initialize array a
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	size_t i; // counter

	puts("Data items in original order");

	// loop through array a
	for (i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	} // end for

	bubbleSort(a, SIZE); // sort the array

	puts("\nData itmes in ascending order");

	// loop through array a 
	for (i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	} // end for

	puts("");
} // end main

// sort an array of integers using bubble sort algorithm
void bubbleSort(int * const array, size_t size)
{
	void swap(int *element1Ptr, int *element2Ptr); // prototype
	unsigned int pass; // pass counter
	size_t j; // comparison counter

	// loop to control passes
	for (pass = 0; pass < size - 1; ++pass) {
		
		// loop to control comparisons during each pass
		for (j = 0; j < size - 1; ++j) {
			
			// swap adjacent elements if they're out of order
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
			} // end if
		} // end inner for
	} // end outer for
} // end function bubbleSort

// swap values at memory locations to which element1Ptr and 
// element2Ptr point
void swap(int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
} // end function swap