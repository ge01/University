#include <stdio.h>

// Function prototypes

int main(void)
{
	int *test;            // dynamically allocate an array
	double average;       // hold average of test scores
	int scores;           // hold number of scores

	// Get number of scores
	printf_s("\nHow many scores do you have to average? ");
	scanf_s("%d", &scores);

	// Create array dynamically at program runtime
	//malloc() lets us reserve memory space in heap 
	test = (int*)malloc(scores * sizeof(int));

	printf_s("\nEnter the values of the array: ");
	int i;
	for (i = 0; i < scores; i++)
		scanf("%d", &test[i]);

	printf_s("\nThe values in the array are: \n");
	for (i = 0; i < scores; i++)
		printf("%d\t", test[i]);

	free(test);
}