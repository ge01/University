// 
// September 5, 2017
// This program reads in two integers. It determins and prints
// whether the first is a multiple of the second.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	int num1;	// first number to be read from user
	int num2;	// second number to read from user

	// INPUT
	printf("Enter two integers and I will tell you\n");
	printf("if the first is a multiple of the second\n\n");

	printf("Enter first integer: ");
	scanf("%d", &num1);

	printf("Enter second integer: ");
	scanf("%d", &num2);
	printf("\n");

	// PROCESS AND OUTPUT
	if ((num2 % num1) == 0) {
		printf("%d is a multiple of %d\n\n", num1, num2);
	} // end if		

	if ((num2 % num1) != 0) {
		printf("%d is not a multiple of %d\n\n", num1, num2);
	} // end if	
}