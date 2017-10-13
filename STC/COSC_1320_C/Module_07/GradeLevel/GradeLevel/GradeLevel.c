//
// October 13, 2017
// This program accepts the number of credits a student has completed, determines the 
// student's grade level, and displays the grade level.

#include <stdio.h>

int gradeLevel(int creditsCompleted); // function prototype gradeLevel

// function main begins program execution
int main()
{
	int numOfCredits;  // holds number of credits

	// get the number of credits completed
	printf("%s", "Enter the number of credits completed: ");
	scanf("%d", &numOfCredits);

	// print out the grade level
	printf("%s", "You are a ");
	gradeLevel(numOfCredits);  // call gradeLevel function
	
}

// function gradeLevel definition
int gradeLevel(int creditsCompleted)
{
	// determine grade level
	if (creditsCompleted < 32)
		printf("%s", "Freshman\n");

	else if (creditsCompleted < 64)
		printf("%s", "Sophmore\n");

	else if (creditsCompleted <= 95)
		printf("%s", "Junior\n");

	else
		printf("%s", "Senior\n");
}