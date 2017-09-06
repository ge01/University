// September 5, 2017
// This program asks the user to input one five-digit number.  
// It then separates the number into its individual digits and 
// prints the digits separated from one another by three spaces 
// each. For example, if the user types in 42139, the program 
// should print 4   2   1   3   9
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// VARIABLES
	int inputNumber;
	int digit4;
	int digit3;
	int digit2;
	int digit1;
	int digit0;

	// INPUT
	printf("Enter one five-digit number: ");
	scanf("%d", &inputNumber);
	printf("\n");

	// PROCESS
	digit4 = inputNumber / 10000;
	digit3 = inputNumber / 1000 % 10;
	digit2 = inputNumber / 100 % 10;
	digit1 = inputNumber / 10 % 10;
	digit0 = inputNumber % 10;

	// OUTPUT
	printf("%d   %d   %d   %d   %d\n\n", digit4, digit3, digit2, digit1, digit0);

}