// Fig. 2.5: fig_0205.c
// Addition program.
#include <stdio.h>

// function main begins program executuion
int main(void)
{
	// VARIABLE DEFINITION
	// Variable name in C is any valid identifier. An identifier is a series 
	// of characters consisting of letters, digits and underscores(_) that does 
	// not begin with a digit.C is case sensitive — uppercase and lowercase 
	// letters are different in C, so a1 and A1 are different identifiers.
	int integer1;	// first number to be entered by user
	int integer2;	// second number to be entered by user
	int sum;		// variable in which sum will be stored

	// PROMPTING MESSAGES
	printf("Enter first integer\n"); // prompt
	// scanf (the "f" stands for "formatted") has two argumetns 
	//	%d - format control string
	//		d stands for "decimal integer"
	//		% begins a conversion specifier
	//	& - address operator
	//		tells scanf the location (or address) in memory
	scanf("%d", &integer1); // read an integer

	printf("Enter second integer\n"); // prompt
	scanf("%d", &integer2); // read an integer

	// ASSIGNMENT STATEMENT
	// Operators are + and =
	// Operands are integer1 and integer2
	sum = integer1 + integer2;	// assign total to sum

	// PRINTING WITH A FORMAT CONTROL STRING
	// printf has two arguments
	//	conversion specifier %d
	//	2nd argument is the value to be printed
	printf("Sum is %d\n", sum); // print sum
	// end function main
}