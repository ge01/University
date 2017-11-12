#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int randomArray[5][5], i, j;
	//int randomArray[5][5];

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
	printf_s("the smallest and biggest number in the array\n");
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
	int reference[25], k = 0, l = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			reference[k] = randomArray[i][j];
			k++;
		} // end j for
	} // end i for

	for (i = 0; i < 25; ++i) {
		printf_s("%d ", reference[i]);
	}
	puts("");

	
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

	puts("");
	for (i = 0; i < 25; ++i) {
		printf_s("%d ", reference[i]);
	}
	puts("");
	puts("");

	
	// Copy sorted 1D array back to 2D array
	i = 0;
	k = 0;
	while (i < 25) {
		for (j = 0; j < 5; j++) {
			randomArray[k][j] = reference[l];
			l++;
		} // end for
		k++;
		i = i + 5;
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