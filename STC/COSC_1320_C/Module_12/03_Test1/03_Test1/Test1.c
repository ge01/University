#include <stdio.h>

// Function prototypes

int main(void)
{
	//double *test;        // dynamically allocate an array
	//double average;         // average of the scores
	//int scores;             // number of scores

	//// Get number of scores
	//printf_s("How many grades will be entered? ");
	//scanf_s("d", &scores);

	//// Dynamically allocate an array to hold scores
	//double *test[scores];

	int i;
	int meatBalls[5] = { 1,2,3,4,5 };

	printf("Element \t Address \t Value \n");

	for (i = 0; i < 5; i++) {
		printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
	}

	// array names are just pointers to the first element
	printf("\n meatBalls \t\t %p \n", meatBalls);

	// dereference it
	printf("\n meatBalls \t\t %d \n", *meatBalls);
	printf("\n *(meatBalls+2) \t\t %d \n", *(meatBalls+2));
}