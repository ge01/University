// Fig. 6.22: fig_0622.c
// Double-subscripted array manipulations.
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

// function prototype
int minimum(int grades[][EXAMS], size_t pupils, size_t tests);
int maximum(int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(int grades[], [EXAMS], size_t pupils, size_t tests);

// function main begins program execution
int main(void)
{
	size_t student; // student counter

	// initialize student grades for three students (rows)
	int studentGrades[STUDENTS][EXAMS] =
	{ { 77, 68, 86, 73 },
	  { 96, 87, 89, 78 },
	  { 70, 90, 86, 81 } };

	// output array studentGrades
	puts("The array is: ");
	printArray(studentGrades, STUDENTS, EXAMS);
}