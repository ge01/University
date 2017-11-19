#include <stdio.h>

// Function prototypes
void getData(int *testA, int scoresA);

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

	getData(test, scores);


	//free(test);
}

// This function asks the user to input test scores that are stored
// in an array
void getData(int *testA, int scoresA)
{
	/*printf_s("\nEnter the values of the array: ");
	int i;
	for (i = 0; i < scoresA; i++)
		scanf("%d", &testA[i]);

	printf_s("\nThe values in the array are: \n");
	for (i = 0; i < scoresA; i++)
		printf("%d\t", testA[i]);*/

	printf_s("Enter each score.\n");
	for (int i = 0; i < scoresA; ++i) {
		do {
			printf_s("Score # %d: ", (i));
			scanf_s("%d", &testA[i]);

			if (&testA < 0) {
				printf_s("Score must not be negative.\n");
				printf_s("Enter score again: ");
			}
		} while (&(testA) < 0);
	}
}