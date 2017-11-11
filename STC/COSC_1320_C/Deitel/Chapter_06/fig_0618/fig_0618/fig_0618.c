// Fig. 6.18: fig_0618.c
// Linear search of an array.
#include<stdio.h>
#define SIZE 100

// function prototype
size_t linearSearch(const int array[], int key, size_t size);

// function main begins program execution
int main(void)
{
	int a[SIZE]; // create array a
	size_t x; // counter for initializing elements 0-99 of array a
	int searchKey; // value to locate in array a
	size_t element; // variable to hold location of searchKey or -1

	// create some data
	for (x = 0; x < SIZE; ++x) {
		a[x] = 2 * x;
	} // end for

	puts("Enter integer search key:");
	scanf("%d", &searchKey);

	// attempt to locate searchKey in array a 
	element = linearSearch(a, searchKey, SIZE);

	// display results
	if (element != -1) {
		printf("Found value in element %d\n", element);
	} // end else
} // end main

// compare key to every element of array until the location is found
// or until the end of array is reached; return subscript of element
// if key is found or -1 if key is not found
size_t linearSearch(const int array[], int key, size_t size)
{
	size_t n; // counter

	// loop through array
	for (n = 0; n < size; ++n) {
		if (array[n] == key) {
			return n; // return location of key
		} // end if
	} // end for

	return -1; // key not found
} // end function linearSearch