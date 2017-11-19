#include <stdio.h>

// Function prototypes
void getData(int *testA, int scoresA);
void ascendingSort(int *testA, int scoresA);
int getAverage(int *testA, int scoresA);

int main(void)
{
	int *test;            // dynamically allocate an array
	int average;       // hold average of test scores DOUBLE
	int scores;           // hold number of scores

	// Get number of scores
	printf_s("\nHow many scores do you have to average? ");
	scanf_s("%d", &scores);

	// Create array dynamically at program runtime
	//malloc() lets us reserve memory space in heap 
	test = (int*)malloc(scores * sizeof(int));

	getData(test, scores);
	ascendingSort(test, scores);

	average = getAverage(test, scores);

	printf_s("%d", average);


	//free(test);
}

// This function asks the user to input test scores that are stored
// in an array
void getData(int *testA, int scoresA)
{
	printf_s("Enter each score.\n");

	for (int i = 0; i < scoresA; ++i) {
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
	int i;
	int j;
	int temp;

	for (i = 0; i < scoresA; i++)
	{
		for (j = 0; j < (scoresA - i - 1); j++)
		{
			if (&testA[j] > &testA[j + 1])
			{
				temp = &testA[j];
				testA[j] = &testA[j + 1];
				testA[j + 1] = temp;
			}
		}
	}

	printf("Sorted array is...\n");
	for (i = 0; i < scoresA; i++)
	{
		printf("%d\n", testA[i]);
	}
}

// This function calculates the average of the scores stored in an array
int getAverage(int *testA, int scoresA)
{
	int total = 0;
	int i;

	for (i = 0; i < scoresA; ++i) {
		total += testA[i];
	}

	return total / scoresA;
}