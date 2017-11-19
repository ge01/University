//
// November 19, 2017
// This program dynamically allocates an array large enough to hold a user-
// defined number of test scores.
#include <stdio.h>

// Function prototypes
void getData(int *testA, int scoresA);
void ascendingSort(int *testA, int scoresA);
int getAverage(int *testA, int scoresA);
void displayData(int *testA, int scoresA, int Avg);

int main(void)
{
	int *test;            // dynamically allocate an array
	int average;          // hold average of test scores DOUBLE
	int scores;           // hold number of scores

	// Get number of scores
	printf_s("How many scores do you have to average? ");
	scanf_s("%d", &scores);

	// Create array dynamically at program runtime
	//malloc() lets us reserve memory space
	test = (int*)malloc(scores * sizeof(int));

	// Call functions
	getData(test, scores);
	ascendingSort(test, scores);
	average = getAverage(test, scores);	
	displayData(test, scores, average);
}

// This function asks the user to input test scores that are stored
// in an array
void getData(int *testA, int scoresA)
{
	printf_s("Enter each score.\n");

	// Input test scores
	for (int i = 0; i < scoresA; ++i) {
		// Score must not be negative
		do {
			printf_s("Score # %d: ", (i));
			scanf_s("%d", &testA[i]);

			if (&testA[i] < 0) {
				printf_s("Score must not be negative.\n");
				printf_s("Enter score again: ");
			}
		} while (&testA[i] < 0);
	}
	//printf_s("%d %d %d", &testA[0], testA[0], testA);
}

// This function sorts the Test array in ascedning order
void ascendingSort(int *testA, int scoresA)
{
	unsigned int pass;      // pass counter
	size_t j;               // comparison counter
	unsigned int hold;      // temporary locationused to swap elements

	// Loop to control number of passes
	for (pass = 1; pass < scoresA; ++pass) {
		// Loop to control number of comparisons per pass
		for (j = 0; j < scoresA - 1; ++j) {

			// Swap elements if out of order
			if (testA[j] > testA[j + 1]) {
				hold = testA[j];
				testA[j] = testA[j + 1];
				testA[j + 1] = hold;
			} // end if
		} // end inner for
	} // end outer for
} 

// This function calculates the average of the scores stored in an array
int getAverage(int *testA, int scoresA)
{
	// Variables
	int total = 0;
	int i;

	for (i = 0; i < scoresA; ++i) {
		total += testA[i];
	}

	return total / scoresA;
}

// This function displays all data collected
void displayData(int *testA, int scoresA, int Avg)
{
	// Variable
	int i;

	printf_s("\nNumber of scores: %d \n", scoresA);
	
	printf("The sorted array is... ");
	for (int i = 0; i < scoresA; i++)
	{
		printf("%d ", testA[i]);
	}

	printf_s("\nAverage score: %d \n\n", Avg);
}