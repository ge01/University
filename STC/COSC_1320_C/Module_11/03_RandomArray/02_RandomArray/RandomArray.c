//
// November 12, 2017
// This program declares a two dimensional array of size 5 x 5; There are a
// a total of 25 elements in the array. The rand() function generates the
// numbers within the range of 1 - 100 and fills the array with random numbers.
// This program also does the following:
//	-prints out the array by rows
//	-prints out the smallest and biggest number in the array
//	-prints out the array by coumns
//	-uses the bubble sort technique to sort the array out and print it out
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// Declare variables
	int randomArray[5][5];
	int i;
	int j;
	
	// Fill 5 x 5 array with random numbers 
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			randomArray[i][j] = rand() % 100 + 1;
		} // end of j for
	} // end of i for

	// Print out array by rows
	printf_s("Array by rows\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf_s("%2d ", randomArray[i][j]);
		} // end of j for
		puts("");
	} // end of i for
	puts("");

	// Print out the smallest and biggest number in the array	
	int smallest = randomArray[0][0];
	int biggest = randomArray[0][0];

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (randomArray[i][j] > biggest) {
				biggest = randomArray[i][j];
			}
			if (randomArray[i][j] < smallest) {
				smallest = randomArray[i][j];
			} 
		} // end j for
	} // end i for

	printf_s("The smallest and biggest number in the array\n");
	printf_s("biggest: %d smallest: %d\n", biggest, smallest);
	puts("");

	// Print out the array by columns
	printf_s("Array by columns\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf_s("%2d ", randomArray[j][i]);
		} // end of j for
		puts("");
	} // end of i for
	puts("");

	// Convert 2D array to 1D array
	int reference[25];
	int x = 0; 
	int y = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			reference[x] = randomArray[i][j];
			x++;
		} // end j for
	} // end i for

	// Check 2D to 1D array conversion
	//for (i = 0; i < 25; ++i) {
	//	printf_s("%d ", reference[i]);
	//}
	//puts("");
	
	// Bubble sort 1D array
	for (i = 0; i < 25; i++) {
		for (j = 0; j < 24; j++) {
			if (reference[j] > reference[j + 1]){
				int temp = reference[j];
			reference[j] = reference[j + 1];
			reference[j + 1] = temp;
			}  // end if
		} // end j for
	} // end i for

	// Check bubble sort
	//puts("");
	//for (i = 0; i < 25; ++i) {
	//	printf_s("%d ", reference[i]);
	//}
	//puts("");
	//puts("");
	
	// Copy sorted 1D array back to 2D array
	i = 0;
	x = 0;

	while (i < 25) {
		for (j = 0; j < 5; j++) {
			randomArray[x][j] = reference[y];
			y++;
		} // end for
		x++;
		i += 5;
	} // end while
		
	// Print sorted 2D array
	printf_s("Bubble sorted array\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf_s("%2d ", randomArray[i][j]);
		} // end of j for
		puts("");
	} // end of i for
	puts("");
}