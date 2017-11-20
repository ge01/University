//
// November 19, 2017
// This program dynamically allocates an array large enough to hold a user-
// defined number of test scores. It also allow the user to enter integer-id
// pairs.
#include <stdio.h>

struct student
{
	int name;
	int grade;
};

typedef struct student Student;  // new type name for struct student

// Function prototypes
void getData(Student *, int scoresA);
void ascendingSort(Student *, int scoresA);
int getAverage(Student *, int scoresA);
void displayData(Student *, int scoresA, int Avg);
//void getData(char *name, char grade, int *testA, int scoresA);
//void getData(int *testA, int scoresA);

int main(void)
{
	Student *test;            // dynamically allocate an array
	int average;          // hold average of test scores DOUBLE
	int scores;           // hold number of scores
	//int *name;
	//int *grade;

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
void getData(Student *test, int scoresA)
{
	//int grade = 0;

	printf_s("Enter each Integer ID and Score of each student.\n");

	// Input test scores
	for (int i = 0; i < scoresA; ++i) {

		printf_s("Integer ID #%d: ", (i));
		scanf_s("%d", &test[i].name);

		// Score must not be negative
		do {
			printf_s("Score #%d: ", (i));
			scanf_s("%d", &test[i].grade);			

			if (&test[i].grade < 0) {
				printf_s("Score must not be negative.\n");
				printf_s("Enter score again: ");
			}
		} while (&test[i].grade < 0);
	}
	//printf_s("%d %d", &test[0].name, test[0].name);
}

// This function sorts the Test array in ascedning order
void ascendingSort(Student *test, int scoresA)
{
	unsigned int pass;      // pass counter
	size_t j;               // comparison counter
	unsigned int hold;      // temporary locationused to swap elements

							// Loop to control number of passes
	for (pass = 1; pass < scoresA; ++pass) {
		// Loop to control number of comparisons per pass
		for (j = 0; j < scoresA - 1; ++j) {

			// Swap elements if out of order
			if (test[j].grade > test[j + 1].grade) {
				hold = test[j].grade;
				test[j].grade = test[j + 1].grade;
				test[j + 1].grade = hold;
			} // end if
		} // end inner for
	} // end outer for

	//printf("The sorted array is... ");
	//for (int i = 0; i < scoresA; i++)
	//{
	//	printf("\nStudent ID:%d Student Grade:%d \n", test[i].name, test[i].grade);
	//}

	//printf_s("\nAverage score: %d \n\n", Avg);
}

// This function calculates the average of the scores stored in an array
int getAverage(Student *test, int scoresA)
{
	// Variables
	int total = 0;
	int i;

	for (i = 0; i < scoresA; ++i) {
		total += test[i].grade;
	}

	// printf_s("%d", total/scoresA);
	return total / scoresA;
}

// This function displays all data collected
void displayData(Student *test, int scoresA, int Avg)
{
	// Variable
	int i;

	printf_s("\nNumber of scores: %d \n\n", scoresA);

	printf_s("The sorted array is: \n");
	for (int i = 0; i < scoresA; i++)
	{
		printf("Student ID:%d Student Grade:%d \n", test[i].name, test[i].grade);
	}

	printf_s("\nAverage score: %d \n\n", Avg);
}