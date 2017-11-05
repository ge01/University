// Fig. 6.22: fig06_22.c
// Double-subscripted array manipulations.
#include <stdio.h>
#define PRODUCT 3
#define SALESPERSON 4

// function prototypes
double average(const int setOfGrades[], size_t tests);
void printArray(int grades[][SALESPERSON], size_t pupils, size_t tests);

// function main begins program execution
int main(void)
{
	size_t student; // student counter

					// initialize student grades for thee students (rows)
	int studentGrades[PRODUCT][SALESPERSON] =
	{ { 77, 68, 86, 73 },
	{ 96, 87, 89, 78 },
	{ 70, 90, 86, 81 } };

	// output array studentGrades
	puts("The array is: ");
	printArray(studentGrades, PRODUCT, SALESPERSON);

	// calculate average grade for each student
	for (student = 0; student < PRODUCT; ++student) {
		printf("The average grade for student %u is %.2f\n",
			student, average(studentGrades[student], SALESPERSON));
	} // end for
} // end main

  // Determine the average grade for a particular student
double average(const int setOfGrades[], size_t tests)
{
	size_t i; // exam counter
	int total = 0; // sum of test grades

				   // total all grades for one student
	for (i = 0; i < tests; ++i) {
		total += setOfGrades[i];
	} // end for

	return (double)total / tests; // average
} // end function average

  // Print the array
void printArray(int grades[][SALESPERSON], size_t pupils, size_t tests)
{
	size_t i; // student counter
	size_t j; // exam counter

			  // output column heads
	printf("%s", "                 [0]  [1]  [2]  [3]");

	// output grades in tabular format
	for (i = 0; i < pupils; ++i) {

		// output label for row
		printf("\nProduct[%d] ", i);

		// output grades for one student
		for (j = 0; j < tests; ++j) {
			printf("%-5d", grades[i][j]);
		} // end inner for
	} // end outer for
} // end function printArray