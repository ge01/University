#include <stdio.h>

// Function prototypes
void getData(int *testA, int scoresA, char *nameA);
void ascendingSort(int *testA, int scoresA);
int getAverage(int *testA, int scoresA);
void displayData(int *testA, int scoresA, int Avg);

int main(void)
{
	int *test;            // dynamically allocate an array
	char *name;
	int average;       // hold average of test scores DOUBLE
	int scores;           // hold number of scores

						  // Get number of scores
	printf_s("\nHow many scores do you have to average? ");
	scanf_s("%d", &scores);

	// Create array dynamically at program runtime
	//malloc() lets us reserve memory space in heap 
	test = (int*)malloc(scores * sizeof(int));
	name = (char*)malloc(scores * sizeof(int));

	getData(test, scores, name);
	ascendingSort(test, scores);

	average = getAverage(test, scores);

	displayData(test, scores, average);

	// printf_s("%d", average);


	//free(test);
}

// This function asks the user to input test scores that are stored
// in an array
void getData(int *testA, int scoresA, char *nameA)
{
	printf_s("Enter each score.\n");

	for (int i = 0; i < scoresA; ++i) {
		do {
			printf_s("Score # %d: ", (i));
			scanf_s("%d", &testA[i]);

			printf_s("Name # %d: ", (i));
			scanf_s("%d", &nameA[i]);

			if (&testA[i] < 0) {
				printf_s("Score must not be negative.\n");
				printf_s("Enter score again: ");
			}
		} while (&testA[i] < 0);
	}


}

// This function sorts the Test array in ascedning order
void ascendingSort(int *testA, int scoresA)
{
	unsigned int pass; // pass counter
	size_t j; // comparison counter
	unsigned int hold; // temporary locationused to swap elements

					   // loop to control number of passes
	for (pass = 1; pass < scoresA; ++pass) {
		// loop to control number of comparisons per pass
		for (j = 0; j < scoresA - 1; ++j) {

			// swap elements if out of order
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
	int total = 0;
	int i;

	for (i = 0; i < scoresA; ++i) {
		total += testA[i];
	}

	return total / scoresA;
}

void displayData(int *testA, int scoresA, int Avg)
{
	int i;

	printf_s("\n Test scores\n");
	printf_s("Number of scores: %d \n", scoresA);

	printf("sorted array is...\n");
	for (int i = 0; i < scoresA; i++)
	{
		printf("%d ", testA[i]);
	}

	printf_s("Average score: %d", Avg);
}