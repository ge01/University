//
// October 13, 2017
// This program contains the function integerPower(base, exponent) that returns the 
// value of base^exponent. For example, integerPower(3,4) = 3*3*3*3.  It assumes
// the exponent is positive, nonzero, integer and that base is an integer.
#include <stdio.h>

int integerPower(int base, int exponent); // function prototype

// function main begins program execution
int main()
{
	int a = 5;  // value used as the base
	int b = 4;  // value used as the exponent
		
	// print base, exponent, and final value
	printf("Base %d with exponent %d is %d.\n", a, b, integerPower(a, b));
}

// function integerPower definition
int integerPower(int base, int exponent)
{
	int i;            // variable used in loop counter 
	int holdNum = 1;  // variable used to hold value to return

	// loop exponent times
	for (i = 0; i < exponent; ++i)
		holdNum *= base;
	
	return holdNum;
}
